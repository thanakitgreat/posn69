#include <iostream>
#include <vector>
using namespace std;

typedef long long L;

L X(L a, L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a;
    cin >> a;
    if (a < 1 || a > 1000){
        return 0;
    }
    L b[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };
    char c;
    for (int i = 0 ; i < a ; i++){
        L d = 0;
        for (int j = 0 ; j < 10 ; j++){
            for (int k = 0 ; k < 10 ; k++){
                cin >> c;
                if (c == 'X'){
                    d += b[j][k];
                }
            }
        }
        cout << d << endl;
    }
}