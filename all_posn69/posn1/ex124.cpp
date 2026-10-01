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
    
    L num; cin >> num;
    L nums[num][num];
    for(L i = 0 ; i < num ; i++) for(L j = 0 ; j  < num ; j++) cin >> nums[j][i];
    for(L i = num-1 ; i >= 0 ; i--){
        for(L j = 0 ; j  < num ; j++) cout << nums[i][j] << " ";
        cout << "\n";
    }  
}