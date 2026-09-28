#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,numin,maxsum = -2e8,cursum = 0,stick;
    cin >> num >> stick;
    L nums[num];
    for(L i = 0 ; i < num ; i++){
        cin >> numin;
        nums[i] = numin;
    }
    L left = 0,prefix = 0;
    L minPrefix[stick];
    for (L i = 0; i < stick; i++) minPrefix[i] = -maxsum;
    minPrefix[0] = 0;

    for(L right = 0 ; right < num ; right++){
        L len = right - left + 1;
        cursum += nums[right];
        
    }
    for (L i = 1; i <= num; i++) {
        prefix += nums[i - 1];
        L rem = i % stick;
        
        if (minPrefix[rem] != -maxsum) {
            maxsum = max(maxsum, prefix - minPrefix[rem]);
        }
        
        minPrefix[rem] = min(minPrefix[rem], prefix);
    }
    cout << maxsum;
}