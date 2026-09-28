#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    vector<int> g(4);

    a.pop_back(); b.pop_back();
    c.pop_back(); d.pop_back(); e.pop_back();
    g[0] = stoi(a); g[1] = stoi(b);
    g[2] = stoi(c); g[3] = stoi(d);
    
    int h = abs(g[0] - g[2]);
    int m = abs(g[1] - g[3]);

    bool n = false;
    if (e == "PAWN"){
        n = (h == 1 && m == 1);
    }else if(e == "BISHOP"){
        n = (h == m);
    }else if(e == "ROOK"){
        n = (g[0] == g[2] || g[1] == g[3]);
    }else if (e == "KNIGHT"){
        n = (h == 1 && m == 2) || (h == 2 && m == 1);
    }else if(e == "KING"){
        n = (h <= 1 && m <= 1);
    }else if(e == "QUEEN"){
        n = (h == m || g[0] == g[2] || g[1] == g[3]);
    }
    cout << n;
}