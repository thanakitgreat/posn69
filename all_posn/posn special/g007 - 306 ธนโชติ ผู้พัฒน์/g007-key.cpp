#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <algorithm>
using namespace std;

void readMatrix(vector<vector<int>>& matrix, int N) {
    for (int y = 0; y < N; y++)
        for (int x = 0; x < N; x++)
            cin >> matrix[y][x];
}

void computePowerMap(const vector<vector<int>>& matrix, vector<vector<int>>& N_matrix, vector<vector<string>>& T_matrix, int N, int R) {
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
}

void findHighest(const vector<vector<int>>& N_matrix, int N, int K, vector<int>& highest, vector<pair<int, int>>& position_highest) {
    for (int i = 0; i < K; i++) {
        int max_val = numeric_limits<int>::min();
        pair<int, int> pos;
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < N; x++) {
                if (find(highest.begin(), highest.end(), N_matrix[y][x]) == highest.end() && N_matrix[y][x] > max_val) {
                    max_val = N_matrix[y][x];
                    pos = {x, y};
                }
            }
        }
        highest.push_back(max_val);
        position_highest.push_back(pos);
    }
}

void printBestPowers(const vector<int>& highest) {
    cout << "Best Powers:" << endl;
    for (int elem : highest) cout << elem << endl;
}

void printBestPositions(const vector<pair<int, int>>& position_highest) {
    cout << "Best Positions:" << endl;
    for (auto& elem : position_highest)
        cout << "(" << elem.first << "," << elem.second << ")" << endl;
}

void printPowerMap(const vector<vector<int>>& N_matrix, int N) {
    cout << "Power Map:" << endl;
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++)
            cout << N_matrix[y][x] << " ";
        cout << endl;
    }
}

void updateTypeMap(vector<vector<string>>& T_matrix, const vector<vector<int>>& N_matrix, const vector<pair<int, int>>& position_highest, int N) {
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < N; x++) {
            bool is_highest = false;
            for (auto& elem : position_highest) {
                if (x == elem.first && y == elem.second) {
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
}

void printTypeMap(const vector<vector<string>>& T_matrix, int N) {
    cout << "Type Map:" << endl;
    for (int y = -1; y <= N; y++) {
        for (int x = -1; x <= N; x++) {
            if (y == -1 || y == N || x == -1 || x == N)
                cout << "0 ";
            else
                cout << T_matrix[y][x] << " ";
        }
        cout << endl;
    }
}

void printTreasureValue(const vector<int>& highest) {
    cout << "Treasure Value:" << endl;
    double avg = 0;
    if (!highest.empty()) {
        int sum = 0;
        for (int val : highest) sum += val;
        avg = static_cast<double>(sum) / highest.size();
    }
    cout.precision(2);
    cout << fixed << "Average: " << avg << endl;
    double median = 0;
    if (!highest.empty()) {
        vector<int> sorted_highest = highest;
        sort(sorted_highest.begin(), sorted_highest.end());
        if (sorted_highest.size() % 2 == 1)
            median = sorted_highest[sorted_highest.size() / 2];
        else
            median = (sorted_highest[sorted_highest.size() / 2 - 1] + sorted_highest[sorted_highest.size() / 2]) / 2.0;
    }
    cout << fixed << "Median: " << median << endl;
    cout.precision(0);
    for (int val : highest)
        if (val > avg) cout << val << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, R, K;
    cin >> N >> R >> K;

    vector<vector<int>> matrix(N, vector<int>(N));
    vector<vector<int>> N_matrix(N, vector<int>(N));
    vector<vector<string>> T_matrix(N, vector<string>(N));
    vector<int> highest;
    vector<pair<int, int>> position_highest;

    readMatrix(matrix, N);
    computePowerMap(matrix, N_matrix, T_matrix, N, R);
    findHighest(N_matrix, N, K, highest, position_highest);

    sort(highest.begin(), highest.end());
    printBestPowers(highest);

    sort(position_highest.begin(), position_highest.end());
    printBestPositions(position_highest);

    printPowerMap(N_matrix, N);

    updateTypeMap(T_matrix, N_matrix, position_highest, N);
    printTypeMap(T_matrix, N);

    printTreasureValue(highest);

    return 0;
}