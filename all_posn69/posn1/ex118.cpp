#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef bool B;
typedef double D;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num,numin; cin >> num; cin >> ws;
    S text; getline(cin,text);
    stringstream in(text);
    vector<L> nums;
    while(in >> numin) nums.push_back(numin);
    
}