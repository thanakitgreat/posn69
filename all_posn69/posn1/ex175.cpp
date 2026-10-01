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
    
    L home,row,col,num; cin >> home >> row >> col;
    vector<pair<L,L>> nums;
    for(L i = 1 ; i <= home ; i++){
        L sum = 0;
        for(L j = 0 ; j < row ; j++){
            for(L k = 0 ; k < col ; k++){
                cin >> num;
                sum += num;
            }
        }
        nums.push_back({sum,i});
    }
    std::sort(nums.begin(),nums.end(), [](const pair<L,L>& a,const pair<L,L>& b){
        if(a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    });
    std::cout << nums[0].second << " " << nums[0].first;
}