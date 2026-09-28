#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[5][5];
    int b;

    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            if (a[i][j] == 1){
                b = abs(2-i) + abs(2-j);
            }
        }
    }
    cout << b;
    return 0;
}