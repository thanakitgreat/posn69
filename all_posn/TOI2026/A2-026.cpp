#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L rabbit,weight,under = 0,pos;
    S name;
    vector<S> names;
    vector<L> weights;
    cin >> rabbit;

    for(L i = 0 ; i < rabbit ; i++){
        cin >> name >> weight;
        if (weight < 15) under++;
        names.push_back(name);
        weights.push_back(weight);
    }
    vector<L> weight_copy = weights;
    sort(weights.begin(),weights.end());
    for(L i = 0 ; i < rabbit ; i++){
        if (weight_copy[i] == weights[rabbit-1]){
            pos = i;
            break;
        }
    }
    cout << under << "\n" << names[pos] << " " << weight_copy[pos];

}