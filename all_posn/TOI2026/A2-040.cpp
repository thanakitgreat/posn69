#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

void printer(string a,bool b){
    if (b){
        cout << a << "\n";
    }else{
        cout << a;
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L size,value;
    cin >> size;
    L array[101][101];
    for(L i = 0 ; i < size ; i++){
        for(L j = 0 ; j < size ; j++){
            cin >> array[i][j];
        }
    }
    for(L i = 0 ; i < size ; i++){
        for(L j = 0 ; j < size ; j++){
            cin >> value;
            array[i][j] += value;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}