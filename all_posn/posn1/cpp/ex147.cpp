#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for (int i = 0 ; i < a ; i++){
        for (int j = 0 ; j < a ; j++){
            if (i%2 == 0){
                if (j%2 == 0){
                    cout << 'W';
                }else{
                    cout << 'B';
                }
                if (j != a-1 ){
                    cout << " ";
                }
            }else{
                if (j%2 == 1){
                    cout << 'W';
                }else{
                    cout << 'B';
                }
                if (j != a-1 ){
                    cout << " ";
                }
            }
            
        }
        cout << endl;
    }
}