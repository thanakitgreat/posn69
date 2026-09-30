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

    L num; cin >> num;
    L nums[num],ans[num];
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    for(L i = 0 ; i < num ; i++){
        if(i == 0 || i == num-1) ans[i] = nums[i];
        else ans[i] = nums[i-1] + nums[i] + nums[i+1];
    }
    for(L i : ans) cout << i << " ";
}