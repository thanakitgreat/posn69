#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main() {
    ifstream inFile("scores.txt"); // Opens "data.txt" for reading
    string line;

    cout << "\n--- Reading File Contents ---\n";
        
    L sum = 0,count = 0;;
    while (getline(inFile, line)) {
        stringstream ss(line);
        vector<string> temp; string s;
        while(ss >> s) temp.push_back(s);
        if(!temp.empty()) {sum += stoll(temp[1]); count++;}
    }
    inFile.close();
    ofstream outFile("summary.txt");
    if (outFile.is_open()) outFile << count << " " << sum;
}