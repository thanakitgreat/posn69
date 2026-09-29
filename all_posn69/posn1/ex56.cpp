#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L size,spin,maxS = -1;
    cin >> size;
    L nums[size][size];
    for(L i = 0 ; i < size ; i++) for(L j = 0 ; j < size ; j++) cin >> nums[i][j];
    cin >> spin;
    if(spin == 90){
        for(L i = 0 ; i < size ; i++){
            for(L j = size-1 ; j >= 0 ; j--) cout << nums[j][i] << " ";
            cout << "\n";
        }
    }else if(spin == 180){
        for(L i = size-1 ; i >= 0 ; i--){
            for(L j = size-1 ; j >= 0 ; j--) cout << nums[i][j] << " ";
            cout << "\n";
        }
    }else if(spin == 270){
        for(L i = size-1 ; i >= 0 ; i--){
            for(L j = 0 ; j < size ; j++) cout << nums[j][i] << " ";
            cout << "\n";
        }
    }

}