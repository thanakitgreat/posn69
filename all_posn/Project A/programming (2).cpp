#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;

L f(L x){
    L y = 1;
    for(L i = 1 ; i <= x ; i++) y *= i;
    return y;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    L num,ord,no;
    cin >> num >> no;
    vector<L> food,cant(no);
    for(L i = 1 ; i <= num ; i++) food.push_back(i);
    for(L i = 0 ; i < no ; i++) cin >> cant[i];
    for(L i = 1 ; i <= f(num) ; i++){
        auto it = find(cant.begin(),cant.end(),food[0]);
        if(it == cant.end()){
            for(auto j : food) cout << j << " ";
            cout << "\n";
        }
        next_permutation(food.begin(),food.end());
    }
}