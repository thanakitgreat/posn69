#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,d;
    cin >> x >> y;
    int i, j, k=0;
    int b[x][y];
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            cin>>b[i][j];
            k += b[i][j];
        }
    }
    cout << k;
}