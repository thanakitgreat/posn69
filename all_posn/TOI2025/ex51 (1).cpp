#include <bits/stdc++.h>
using namespace std;
int N,K;
int mx = INT_MIN;

bool is_valid(int i){
    if (i >= N) return false;
    return true;
}

void ws(int i , int j ,vector <int> &vec,int sum){
    if(i > j)return;
    if((j-i+1)%K == 0){
        mx = max(mx,sum);
        if(is_valid(i+1) & is_valid(j+1)){ws(i+1,j+1,vec,sum-vec[i]+vec[j+1]);}
    }
    if(is_valid(j+1)){ws(i,j+1,vec,sum+vec[j+1]);}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> K;
    vector <int> vec(N);
    for(int i = 0; i < N;i++){
        cin >> vec[i];
    }
    ws(0,0,vec,vec[0]);
    cout << mx;
    return 0;

}