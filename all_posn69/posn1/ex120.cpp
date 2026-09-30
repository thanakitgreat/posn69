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

    L num,count = 0; cin >> num;
    L nums[num];
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    for(L i = 0 ; i < num ; i++){
        for(L j = i+1 ; j < num ; j++){
            L maxH = -1;
            for(L k = i+1 ; k < j ; k++) maxH = max(maxH,nums[k]);
            if(nums[i] > maxH && nums[j] > maxH) count++;
        }
    }
    cout << count;
}