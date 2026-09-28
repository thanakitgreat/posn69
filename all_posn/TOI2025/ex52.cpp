#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k,x,sum = 0;
    cin >> n >> k;
    vector<int> t;
    for (int i = 0; i < n; i++){
        cin >> x;
        t.push_back(x);
    }

    sort(t.begin(),t.end());
    reverse(t.begin(), t.end());
    for (int i = 0; i < k; i++){
        sum += t[i];
    }
    for (int i = k; i < n; i++){
        if (t[i] <= 0){
            break;
        } else sum += t[i];
    }
    cout << sum;
    return 0;
}