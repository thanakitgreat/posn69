#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef bool B;
typedef double D;
typedef char C;

D avg(vector<L> a){
    D sum = 0; for(L i : a) sum += i;
    return sum/a.size()/1.0;
}

L maxH(vector<L> a){
    L tall = -1;
    for(L i : a) tall = max(tall,i);
    return tall;
}

L minH(vector<L> a){
    L tall = 1000001;
    for(L i : a) tall = min(tall,i);
    return tall;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L num,minlim,maxlim,difmax,avgmax;
    cin >> num >> minlim >> maxlim >> difmax >> avgmax;
    vector<L> nums(num); vector<D> ans;
    for(L i = 0 ; i < num ; i++) cin >> nums[i];
    for(L i = 0 ; i < num ; i++){
        for(L j = i+1 ; j < num ; j++){
            if(j-i+1 < minlim || j-i+1 > maxlim) continue;
            else{
                vector<L> subvec;
                for(L k = i ; k <= j ; k++) subvec.push_back(nums[k]);
                if(abs(maxH(subvec)-minH(subvec)) <= difmax){
                    if(avg(subvec) <= avgmax) ans.push_back(avg(subvec));
                }
            }
        }
    }
    sort(ans.begin(),ans.end(),greater<>());
    if(ans.empty()){
        cout << 0 << "\n" << fixed << setprecision(2) << 0.00;
    }else{
        cout << ans.size() << "\n" << fixed 
        << setprecision(2) << ans[0];
    }

    
}