#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L num,count = 0;
    cin >> num;
    L nums[num];
    for(L i = 0 ; i < num ; i++){
        cin >> nums[i];
        if(nums[i]%2 == 0) count++;
    }
    cout << count;
}