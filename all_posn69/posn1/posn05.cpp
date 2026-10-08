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
    
    L num,hurt,dam,sum = 0;
    cin >> num >> hurt >> dam;
    vector<L> nums(num,0);
    for(L i=0 ; i<num ; i++) cin >> nums[i];
    while(count(nums.begin(),nums.end(),0) != nums.size()){
        for(L i=0 ; i<num ; i++){
            if(nums[i] != 0){
                for(L j=i ; j<min(num,i+dam) ; j++){
                    if(nums[j] >= hurt) nums[j] -= hurt;
                    else nums[j] = 0;
                }
                sum++;
                break;
            }
        }
        cout << "Strike " << sum << ": ";
        for(L i : nums) cout << i << " ";
        cout << '\n';
    }
    cout << "Total strikes: " << sum;
}