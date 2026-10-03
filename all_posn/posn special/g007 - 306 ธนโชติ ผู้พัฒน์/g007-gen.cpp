#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generate random input file with proper constraints
void generateInputFile(const string &filename, int N, int R, int K) {
    ofstream fout(filename);
    if (!fout) {
        cerr << "Error creating input file." << endl;
        exit(1);
    }
    fout << N << " " << R << " " << K << "\n";
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            fout << (rand() % 21 - 10) << " "; // Random values between -10 and 10
        }
        fout << "\n";
    }
    fout.close();
}

// Process matrix input and produce output
void processMatrix(const string &inFile, const string &outFile) {
    ifstream fin(inFile);
    if (!fin) {
        cerr << "Error opening input file: " << inFile << endl;
        return;
    }

    int N, R, K;
    fin >> N >> R >> K;

    vector<vector<int>> matrix(N, vector<int>(N));
    vector<vector<int>> N_matrix(N, vector<int>(N));
    vector<vector<string>> T_matrix(N, vector<string>(N));
    vector<int> highest;
    vector<pair<int,int>> position_highest;

    for (int y = 0; y < N; y++)
        for (int x = 0; x < N; x++) fin >> matrix[y][x];
    fin.close();

    // Calculate Power Map
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            int sum = matrix[y][x];
            if (y + R < N) sum += matrix[y + R][x];
            if (y - R >= 0) sum += matrix[y - R][x];
            if (x + R < N) sum += matrix[y][x + R];
            if (x - R >= 0) sum += matrix[y][x - R];
            N_matrix[y][x] = sum;
            T_matrix[y][x] = to_string(sum);
        }
    }

    // Find top K highest powers
    for (int i = 0; i < K; i++) {
        int max_val = numeric_limits<int>::min();
        pair<int,int> pos;
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < N; x++) {
                if (N_matrix[y][x] > max_val && 
                    find(highest.begin(), highest.end(), N_matrix[y][x]) == highest.end()) {
                    max_val = N_matrix[y][x];
                    pos = {x, y};
                }
            }
        }
        highest.push_back(max_val);
        position_highest.push_back(pos);
    }

    sort(highest.begin(), highest.end());
    sort(position_highest.begin(), position_highest.end());

    // Update Type Map
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            bool is_highest = false;
            for (auto &p : position_highest) {
                if (x == p.first && y == p.second) {
                    T_matrix[y][x] = "h";
                    is_highest = true;
                    break;
                }
            }
            if (!is_highest) {
                if (N_matrix[y][x] > 0) T_matrix[y][x] = "p";
                else if (N_matrix[y][x] < 0) T_matrix[y][x] = "n";
                else T_matrix[y][x] = "z";
            }
        }
    }

    // Write output to file
    ofstream fout(outFile);
    if (!fout) {
        cerr << "Error creating output file: " << outFile << endl;
        return;
    }

    fout << "Best Powers:\n";
    for (int val : highest) fout << val << "\n";

    fout << "Best Positions:\n";
    for (auto &p : position_highest) fout << "(" << p.first << "," << p.second << ")\n";

    fout << "Power Map:\n";
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) fout << N_matrix[y][x] << " ";
        fout << "\n";
    }

    fout << "Type Map:\n";
    for (int y = -1; y <= N; y++) {
        for (int x = -1; x <= N; x++) {
            if (y == -1 || y == N || x == -1 || x == N) fout << "0 ";
            else fout << T_matrix[y][x] << " ";
        }
        fout << "\n";
    }

    fout << "Treasure Value:\n";
    double avg = 0;
    if (!highest.empty()) {
        int sum = 0;
        for (int val : highest) sum += val;
        avg = static_cast<double>(sum) / highest.size();
    }
    fout.precision(2);
    fout << fixed << "Average: " << avg << "\n";

    double median = 0;
    if (!highest.empty()) {
        if (highest.size() % 2 == 1) median = highest[highest.size() / 2];
        else median = (highest[highest.size() / 2 - 1] + highest[highest.size() / 2]) / 2.0;
    }
    fout << fixed << "Median: " << median << "\n";

    fout.precision(0);
    for (int val : highest) if (val > avg) fout << val << " ";
    fout << "\n";

    fout.close();
}

int main() {
    srand(time(0));
    int totalFiles;

    cout << "How many files do you want to generate? ";
    cin >> totalFiles;

    for (int fileIndex = 1; fileIndex <= totalFiles; fileIndex++) {
        // Random parameters respecting limits
        int N = 1 + rand() % 100;      // 1 ≤ N ≤ 40
        int R = 1 + rand() % 50;      // 1 ≤ R ≤ 20
        int K = 1 + rand() % N;       // 1 ≤ K ≤ N

        string inFile = to_string(fileIndex) + ".in";
        string outFile = to_string(fileIndex) + ".out";

        generateInputFile(inFile, N, R, K);
        processMatrix(inFile, outFile);

        cout << "Generated: " << inFile << " and " << outFile 
             << " (N=" << N << ", R=" << R << ", K=" << K << ")\n";
    }

    cout << "All files generated successfully.\n";
    return 0;
}
