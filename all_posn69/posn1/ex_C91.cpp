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
    
    L num,sum = 0,in,in1,in2,test; cin >> num >> test;
    vector<L> nums(num+1); nums[0] = sum;
    for(L i = 1 ; i <= num ; i++){
        cin >> in; sum += in;
        nums[i] = sum;
    }
    for(L i = 0 ; i < test ; i++){
        cin >> in1 >> in2;
        cout << nums[in2]-nums[in1-1] << "\n";
    }
}