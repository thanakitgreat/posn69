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
    L nums[5];
    for(L i = 0 ; i < 5 ; i++) cin >> nums[i];
    cout << nums[4] << " "; 
    for(L i = 0 ; i < 4 ; i++){
        L* in = &nums[i];
        cout << *in << " ";
    }
}