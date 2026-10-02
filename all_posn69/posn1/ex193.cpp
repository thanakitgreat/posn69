#include <bits/stdc++.h>
using namespace std;
typedef string S;

int main(){
    S text1,text2; cin >> text1 >> text2;
    if(text1.length() > text2.length()) cout << "1>2";
    else if(text1.length() < text2.length()) cout << "1<2";
    else cout << "1=2";
}