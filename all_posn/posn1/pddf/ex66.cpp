#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;


void BBsort(vector<C> &a){
    for(L i = 0 ; i < a.size()-1 ; i++){
        for(L j = 0 ; j < a.size()-i-1 ; j++){
            if(a[j] > a[j + 1]){
                swap(a[j],a[j + 1]);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num;
    C lett;
    vector<C> letters;
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> lett;
        letters.push_back(lett);
    }

    BBsort(letters);
    for(C i : letters) cout << i << " ";
}