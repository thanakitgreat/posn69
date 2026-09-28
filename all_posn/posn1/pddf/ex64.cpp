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
    D sum = 0;
    vector<L> nums;
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> numin;
        nums.push_back(numin);
        sum += numin;
    }
    /*for(L i = 0 ; i < num-1 ; i++){
        for(L j = 0 ; j < num-i-1 ; j++){
            if(nums[i] > nums[j + 1]){
                swap(nums[i],nums[j]);
            }
        }
    }*/
    BBsort(nums);
    D avg = sum/num;
    cout << "sorting: ";
    for(L i : nums) cout << i << " ";
    cout << "\n" << "avg: " << fixed << setprecision(2) << avg;
}