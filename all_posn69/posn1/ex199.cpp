#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text; getline(cin,text);
    vector<pair<L,C>> lett;
    for(C i : text){
        auto it = find_if(lett.begin(),lett.end(),[i](const pair<C,L>& a)\
        {return a.second == i;});
        if(it == lett.end()) lett.push_back({1,i});
        else lett[it-lett.begin()].first++;
    }
    sort(lett.begin(),lett.end(),[](const pair<L,C>& a,const pair<L,C>& b){
        if(a.first != b.first) return a.first > b.first;
        return a.second > b.second;
    });
    cout << lett[0].second << " " << lett[0].first;
}