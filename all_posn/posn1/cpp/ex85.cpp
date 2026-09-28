#include <bits/stdc++.h>
using namespace std;

int m[100][100];
string S;
int a(int i,int j){
    if (i >= j){
        return 0;
    }
    if (m[i][j] != -1){
        return m[i][j];
    }
    if (S[i] == S[j]){
        m[i][j] = a(i+1 , j-1);
    }else{
        m[i][j] = 1 + min(a(i+1,j),a(i,j-1));
    }
    return m[i][j];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> S;
    int N = S.length();
    memset(m,-1,sizeof(m));
    int K = a(0,N-1);
    cout << "Minimum Deletions: " << K << endl;
    cout << "Length of Palindromic: " << N - K << endl;

     return 0;
}