#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int e;
    string a;
    cin >> e >> a;
    int b = 0,d = 1;
    int c = a.length();
    if (c > 50){
        return 0;
    }
    for (int i = 0; i < c-1 ; i++){
        if (a[i] == a[i+1]){
            b++;
        }
    }
    cout << b;
    return 0;
}