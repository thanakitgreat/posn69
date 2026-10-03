#include<bits/stdc++.h>
using namespace std;
int stirling(int number1, int number2) {
    if (number1<number2) {
        return 0;
    }
    if (number1==0 and number2==0) {
        return 1;
    } else if (number1==0 or number2==0) {
        return 0;
    } else {
        return (number1-1)*(stirling(number1-1,number2))+stirling(number1-1,number2-1);
    }
}
int main() {
    int n,k;
    cin>>n>>k;
    cout<<stirling(n,k);
}