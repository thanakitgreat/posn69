#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int c = a/2;
    if (a%2 == 0){
        cout << "e: " << c << ",o: " << c ;
    }else{
        cout << "e: " << c << ",o: " << c+1 ;
    }
    return 0;
}