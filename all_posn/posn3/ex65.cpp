#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,d;
    cin >> c;
    int a[c];
    float e = 0;
    float f;
    float h = c;
    cout << fixed;
    cout << setprecision(1);
    for (int g = 0; g < c;g++){
        cin >> a[g];
    }
    for (int i = c-2 ; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (a[j] > a[j + 1]) {
                d = a[j];
                a[j] = a[j + 1];
                a[j + 1] = d;
            }
        }
    }
    cout << "sort: ";
    for (int i = 0 ; i < c ; i++){
        cout << a[i] << " ";
        e += a[i];
    }
    if (c%2 == 1){
        f = a[c/2];
    }else{
        f = ((a[c/2] + a[(c/2)-1])/2.0);
    }
    cout << endl;
    cout << "median: " << f ;
}