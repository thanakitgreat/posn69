#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    vector<int> b;
    int c = 0;
    int d = 0;
    do{
        cin >> a;
        b.push_back(a);
        d += b[c];
        c++;
    }while (a != -1);
    cout  << (d+2)/(c-1) ;
}