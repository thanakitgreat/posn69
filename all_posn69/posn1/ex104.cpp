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
    L num,ind = -1,nums[7];
    for(L i = 0 ; i < 7 ; i++) cin >> nums[i];
    cin >> num;
    for(L i = 0 ; i < 7 ; i++){
        L* in = &nums[i];
        if(*in == num) ind = i;
    }
    cout << "Index : " << ind;
}