#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text;
    getline(cin,text);
    vector<C> lett;
    for(C a : text){
        if(isalpha(a)){
            C b = tolower(a);
            auto it = find(lett.begin(),lett.end(),b);
            if(it == lett.end()){
                lett.push_back(b);
            }
        }
    }
    cout << lett.size();
}