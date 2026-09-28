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

L median(vector<L> nums){
    L len = nums.size();
    sort(nums.begin(),nums.end());
    return nums[len/2];
}

L bomber(vector<L> nums){
    
    
    while(nums.size() != 1){
        L len = nums.size(),indMed;
        for(L i = 0 ; i < len ; i++){
            if(nums[i] == median(nums)){
                indMed = i;
                break;
            }
        }
        L left  = (indMed - 1 + len) % len;
        L right = (indMed + 1) % len;
        L indMin = (nums[left] > nums[right]) ? right : left;

        L hi = max(indMed, indMin);
        L lo = min(indMed, indMin);
        nums.erase(nums.begin() + hi);
        nums.erase(nums.begin() + lo);
    }
    return nums[0];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S numT;
    L num;
    vector<L> nums;
    getline(cin,numT);
    SS numS(numT);
    while(numS >> num){
        nums.push_back(num);
    }
    cout << bomber(nums);
}