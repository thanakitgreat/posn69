#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,in; cin >> num;
    vector<L> ans = {0,0,-1000000001,1000000001},pos;

    for(L i = 0 ; i < num ; i++){
        cin >> in;
        if(in%2) ans[1]++;
        else ans[0]++;
        ans[2] = max(ans[2],in);
        ans[3] = min(ans[3],in);
        if(in > 0) pos.push_back(in);
    }
    for(L i : ans) cout << i << "\n";
    if(pos.empty()) cout << "NO POSITIVE";
    else for(L i : pos) cout << i << " ";

}