#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef bool B;
typedef double D;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L sick;
    S action,name,status;
    cin >> sick;
    
    deque<S> names;

    if (sick < 1 or sick > 1000) return 0;

    for(L i = 0 ; i < sick ; i++){
        cin >> action;
        if (action == "ARRIVE"){
            cin >> name >> status;
            if(status == "normal") names.push_back(name);
            else if(status == "emergency") names.push_front(name);
        }else if(action == "TREAT"){
            if(!names.empty()) names.pop_front();
        }else if(action == "SHOW"){
            if(!names.empty()){
                for(S i : names){
                    cout << i << " ";
                }
                cout << "\n";
            }else{
                cout << "EMPTY \n";
            }
        }
    }
}