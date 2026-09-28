#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;


L BBsort(vector<L> &a){
    L count = 0;
    for(L i = 0 ; i < a.size()-1 ; i++){
        for(L j = 0 ; j < a.size()-i-1 ; j++){
            if(a[j] > a[j + 1]){
                swap(a[j],a[j + 1]);
                count++;
            }
        }
    }
    return count;
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

    cout << BBsort(nums);   
}