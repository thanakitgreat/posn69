#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(1);

    string a;
    getline(cin,a);
    stringstream b(a);
    vector<string> c;
    string d;
    while( b>>d ){
        c.push_back(d);
    }
    for( int e = 0 ; e < (int)c.size() ; e++){
        if (isupper(c.at(e)[0])){
            cout << c.at(e)[0];
        }
    }

}
