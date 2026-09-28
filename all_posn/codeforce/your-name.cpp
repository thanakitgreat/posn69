#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long L;
typedef string S;

L X(L a, L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}
S Y(S a,S b){
    vector<char> c;
    vector<char> d;
    for (char e : a) c.push_back(e);
    for (char f : b) d.push_back(f);
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    L g = 0;
    for(L i = 0 ; i < c.size() ; i++){
        if (c[i] != d[i]) g++;
    }
    c.clear();
    d.clear();
    if (g == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a,d;
    S b,c;
    cin >> a;
    if (a < 1 || a > 1000){
        return 0;
    }
    for (L i = 0 ; i < a ; i++){
        cin >> d >> b >> c;
        Y(b,c);
        cout << "\n";
    }
    return 0;
}