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
    
    L num,jud,in; cin >> num >> jud;
    vector<pair<D,L>> score;
    for(L i=1 ; i<=num ; i++){
        D sum = 0;
        for(L j=0 ; j<jud ; j++){
            cin >> in; sum += in;
        }
        score.push_back({sum/jud/1.0,i});
    }
    cout << fixed << setprecision(2);
    cout << "Average scores before sorting: " << "\n";
    for(auto i : score) cout << "c" << i.second << ": " << i.first << "\n";
    cout << "Ranking after sorting: " << "\n";
    sort(score.begin(),score.end(),[](const pair<D,L>& a, const pair<D,L>& b){
        return a.first > b.first;
    });
    for(auto i : score) cout << "c" << i.second << ": " << i.first << "\n";
}