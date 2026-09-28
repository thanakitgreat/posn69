#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,ind = -1;;
    L nums[7];
    L* ptr = &num;
    for(L i = 0 ; i < 7 ; i++){
        cin >> nums[i];
    }
    cin >> num;
    for(L i = 0 ; i < 7 ; i++){
        if(nums[i] == *ptr){
            ind = i;
        }
    }
    cout << "Index: " << ind;
}