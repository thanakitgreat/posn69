#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b[a][a], c[a][a];
    for(int d=0;d<a;d++){
        for(int e=0;e<a;e++){
            cin >> b[d][e];
        }
    }
    for(int d=a-1;d>=0;d--){
        for(int e=0;e<a;e++){
            cout << b[e][d] << " ";
        }
        cout << endl;
    }
}
