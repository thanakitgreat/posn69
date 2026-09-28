#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    getline(cin,a);
    int b;
    cin >> b;
    bool c = true;
    for (int i = 0 ; i <= b ; i++){
        string e;
        getline(cin,e);
        if (a.find(e) == string::npos){
            c = false;
            break;
        }
    }
    if (!c){
        cout << "false";
    }else{
        cout << "true";
    }
}