#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(1);

    string a;
    getline(cin,a);
    stringstream b(a);
    vector<double> c;
    double d;
    double f = 0;
    while( b>>d ){
        c.push_back(d);
    }
    for( int e = 0 ; e < (int)c.size() ; e++){
        f += c.at(e);
    }
    cout << f << endl;
    cout << c.size() << endl;
    if (f == 0.0 && c.size() == 0){
        cout << 0.0;
    }else{
        cout << f/c.size() << endl;
    }

}
