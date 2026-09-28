#include <bits/stdc++.h>
using namespace std;

typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 3e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    map<S,L> store;
    B stat = true;
    S action,item;
    L sum;
    while(stat){
        cin >> action;
        if(action == "ADD"){
            cin >> item >> sum;
            if(store.count(item)) store[item] += sum;
            else store[item] = sum;
        }else if(action == "REMOVE"){
            cin >> item >> sum;
            L diff = store[item] - sum;
            if(diff > 0){
                store[item] -= sum;
            }else if(diff == 0){
                store.erase(item);
            }else if(diff < 0){
                store.erase(item);
                cout << "Not enough stock for " << item << "\n";
            }
        }else if(action == "CHECK"){
            B test = false;
            for(auto it = store.begin() ; it != store.end() ; ++it){
                if(it->second < 5){
                    test = true;
                    break;
                }
            }
            if(test){
                for(auto it = store.begin() ; it != store.end() ; ++it){
                    if(it->second < 5) cout << it->first << "\n";
                }
            }else{
                cout << "All stocks are sufficient\n";
            }
        }else if(action == "REPORT"){
            for(auto it = store.begin() ; it != store.end() ; it++)
            cout << it->first << ": " << it->second << "\n";
        }else if(action == "END"){
            return 0;
        }
    }
}