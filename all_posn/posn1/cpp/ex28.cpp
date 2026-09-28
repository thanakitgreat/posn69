#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b;
    if (a%2 == 0){
    b = (a/2)*((a/2)+1) - (a/2)*(a/2);
    }else{
    b = ((a-1)/2)*(((a-1)/2)+1) - ((a+1)/2)*((a+1)/2) ;
    }
    cout << b;
}