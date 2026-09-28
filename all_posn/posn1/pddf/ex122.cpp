#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L num,time,score;
    cin >> num;
    S name,names;
    pair<L,L> a;
    map<pair<L,L>,S> student;
    vector<S> order;
    for(L i = 0 ; i < num ; i++){
        cin >> names >> score >> time;
        student[{time,score}] = names;
    }
    for(auto it = student.begin() ; it != student.end() ; ++it){
        order.push_back(it->second);
    }
    for(L i = num-1 ; i >= 0 ; i--){
        cout << order[i] << "\n";
    }
}