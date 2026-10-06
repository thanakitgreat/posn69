#include <bits/stdc++.h>
using namespace std;
typedef long long L;

int main(){    
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    L num,in,sum = 0; cin >> num;
    string stat; stack<L> nums;
    for(L i=0 ; i<num ; i++){
        cin >> stat;
        if(stat == "ADD") {cin >> in; nums.push(in); sum += in;}
        else if(stat == "UNDO") {if(!nums.empty()){sum -= nums.top(); nums.pop();}}
        else if(stat == "SHOW") cout << sum << "\n";
    }
}