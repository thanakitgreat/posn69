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
    
    L num; cin >> num;
    cin >> ws;
    S text,in,ans = "";
    B stat = true;
    getline(cin,text);
    vector<S> order;
    stringstream ss(text);
    while(ss >> in){
        if(!ans.empty()){
            if(ans.length()+in.length()+1 > num){
                order.push_back(ans);
                ans = in;
            }else{
                ans += " ";
                ans += in;
            }
        }else{
            if(in.length() > num){
                stat = false;
                break;
            }else{
                ans += in;
            }
        }
    }
    order.push_back(ans);

    if(stat) {for(S i : order) cout << i << "\n";}
    else cout << "IMPOSSIBLE";
} 