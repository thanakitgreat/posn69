#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;


void BBsort(vector<L> &a){
    for(L i = 0 ; i < a.size()-1 ; i++){
        for(L j = 0 ; j < a.size()-i-1 ; j++){
            if(a[j] > a[j + 1]){
                swap(a[j],a[j + 1]);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,numin;
    D med;
    vector<L> nums;
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> numin;
        nums.push_back(numin);
    }

    BBsort(nums);
    if(!(num % 2)){
        med = (nums[num/2] + nums[num/2 - 1])/2.0;
    }else{
        med = nums[num/2];
    }
    cout << "sort: ";
    for(L i : nums) cout << i << " ";
    cout << "\n" << "median: " << fixed << setprecision(1) << med;
}