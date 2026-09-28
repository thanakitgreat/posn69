#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    vector<L> notes = {1000,500,100};
    vector<L> value = {0,0,0};
    L money;
    cin >> money;
    
    if(money < 100 or money > 20000){
        cout << "ERROR";
        return 0;
    }

    if(money % 100 == 0){
        while (money >= 1000){
            money -= 1000;
            value[0]++;
        }
        while (money >= 500){
            money -= 500;
            value[1]++;
        }
        while (money >= 100){
            money -= 100;
            value[2]++;
        }
        for(int i = 0 ; i < 3 ; i++){
            if(value[i] != 0){
                cout << notes[i] << " = " << value[i] << "\n";
            }
        }
    }else{
        cout << "ERROR";
    }
    return 0;
}