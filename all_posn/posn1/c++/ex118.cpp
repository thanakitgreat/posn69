#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int a; cin>>a;
    vector<int> b; int x;
    while(cin>>x) b.push_back(x);
    int n=b.size(), ans=0;
    function<void(int,int,int,int)> go=[&](int i,int k,int buy,int sum){
        if(i==n||k==0){ ans=max(ans,sum); return; }
        if(buy==-1) go(i+1,k,i,sum);
        else go(i+1,k,-1,sum+b[i]-b[buy]);
        go(i+1,k,buy,sum);
    };
    go(0,a,-1,0);
    cout<<ans;
}
