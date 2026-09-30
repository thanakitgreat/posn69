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

    using pp = pair<pair<L,L>,S>;
    vector<pp> order;
    L num,score,time; cin >> num;
    S name;
    for(L i = 0 ; i < num ; i++){
        cin >> name >> score >> time;
        order.push_back({{score,time},name});
    }
    sort(order.begin(),order.end(), [](const pp& a,const pp& b){
        if(a.first.first != b.first.first){
            return a.first.first < b.first.first;}
        return a.first.second > b.first.second;
    });
    for(auto i : order) cout << i.second << "\n";
}