#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L num;
    S tin;
    cin >> num;
    vector<S> text;
    for(L i = 0 ; i < num ; i++){
        cin >> tin;
        auto it = find(text.begin(),text.end(),tin);
        if(it == text.end()) text.push_back(tin);
    }
    sort(text.begin(),text.end());
    for(auto i : text) cout << i << "\n";
}