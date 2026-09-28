#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef bool B;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L sick;
    S action,name,status;
    cin >> sick;
    deque<S> nameN;
    deque<S> nameE;
    if (sick < 1 or sick > 1000) return 0;
    for(L i = 0 ; i < sick ; i++){
        cin >> action;
        if (action == "ARRIVE"){
            cin >> name >> status;
            if(status == "normal") nameN.push_back(name);
            else if(status == "emergency") nameE.push_back(name);
        }else if(action == "TREAT"){
            if(!nameE.empty()){
                nameE.pop_front();
            }else{
                if(!nameN.empty()) nameN.pop_front();
            }
        }else if(action == "SHOW"){
            if(!nameE.empty() || !nameN.empty()){
                if(!nameE.empty())for(S i : nameE) cout << i << " ";
                if(!nameN.empty()) for(S i : nameN) cout << i << " ";
                cout << "\n";
            }else{
                cout << "EMPTY\n";
            }
        }
    }
}