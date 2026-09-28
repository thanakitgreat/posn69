#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

struct point{
    D x,y,z;
};

D dist(point a,point b){
    D dx = a.x - b.x;
    D dy = a.y - b.y;
    D dz = a.z - b.z;
    return sqrt(dx*dx + dy*dy + dz*dz);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    D x1,y1,z1,x2,y2,z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    point a = {x1,y1,z1};
    point b = {x2,y2,z2};
    cout << fixed << setprecision(2) << dist(a,b);
}