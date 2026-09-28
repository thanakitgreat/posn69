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
    
    L num,size,odd = 0,eve = 0,pos = 0;
    vector<L> nums;
    vector<L> posNum;
    cin >> size;
    for(L i = 0 ; i < size ; i++){
        cin >> num;
        nums.push_back(num);
        if(!(num % 2)) eve++;
        else odd++;

        if(num > 0){
            pos++;
            posNum.push_back(num);
        }
    }
    sort(nums.begin(),nums.end());
    cout << eve << "\n" << odd << 
    "\n" << nums[size-1] << "\n" << nums[0] << "\n";
    if(pos == 0){
        cout << "NO POSITIVE";
    }else{
        for(L i : posNum){
            cout << i << " ";
        }
    }
}