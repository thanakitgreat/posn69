#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,d,f;
    int e = 0;
    cin >> a >> b;
    vector<int> c;
    vector<int> g;


    unordered_map<int,int> h;

    for (int  i = 0 ; i < a ; i++){
        cin >> d;
        c.push_back(d); 
    }

    for (int i : c){
        int l = b - i;
        if (h[l] > 0){
            e++;
            h[l]--;
        }else{
            h[l]++;
        }
        
    }
    cout << e;
}