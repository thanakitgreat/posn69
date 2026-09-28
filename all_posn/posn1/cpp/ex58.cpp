#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,d;
    cin >> a;
    int e = 0;
    int f = 0;
    int g,h;
    vector<int> b;
    vector<int> i;
    for (int c = 0; c < a;c++){
        cin >> d;
        b.push_back(d);
    }
    for (int c = 0; c < a;c++){
    if (b.at(c) >= 10 && b.at(c) <= 100){
        e += b.at(c);
    }else{
        f++;
    }
    }
    cout << f << " " << e;
}