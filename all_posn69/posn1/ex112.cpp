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

    S text; getline(cin,text);
    vector<C> let;
    for(C j : text){
        if(isalpha(j)){
            C i = tolower(j);
            auto it = find(let.begin(),let.end(),i);
            if(it == let.end()) let.push_back(i);
        }
    }
    cout << let.size();
}