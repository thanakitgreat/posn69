#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L size,angle;
    cin >> size;
    L nums[size][size];
    for(L i = 0 ; i < size ; i++){
        for(L j = 0 ; j < size ; j++) cin >> nums[i][j];
    }
    cin >> angle;
    if(angle == 90){
        for(L i = 0 ; i < size ; i++){
            for(L j = size-1 ; j >= 0 ; j--){
                cout << nums[j][i] << " ";
            }
            cout << "\n";
        }
    }else if(angle == 180){
        for(L i = size-1 ; i >= 0 ; i--){
            for(L j = size-1 ; j >= 0 ; j--){
                cout << nums[i][j] << " ";
            }
            cout << "\n";
        }
    }else if(angle == 270){
        for(L i = size-1 ; i >= 0 ; i--){
            for(L j = 0 ; j < size ; j++){
                cout << nums[j][i] << " ";
            }
            cout << "\n";
        }
    }
}