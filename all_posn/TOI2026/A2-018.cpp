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

    vector<S> color = {"Red","Green","Blue"};
    C start;
    L steps;
    cin >> start >> steps;
    if (start == 'R'){
        for(int i = 0 ; i < steps ; i++){
            cout << color.at(i%3) << " ";
        }
    }else if(start == 'G'){
        for(int i = 0 ; i < steps ; i++){
            cout << color.at((i+1)%3) << " ";
        }
    }else if(start == 'B'){
        for(int i = 0 ; i < steps ; i++){
            cout << color.at((i+2)%3) << " ";
        }
    }

    return 0;
}