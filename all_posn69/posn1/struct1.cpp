#include <bits/stdc++.h>
using namespace std;
typedef long long L;

struct Time{
    L h,m,s;
};

int to_seconds(Time t){ return t.h*3600+t.m*60+t.s;}
int difference(Time t1,Time t2){return abs(to_seconds(t2)-to_seconds(t1));}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Time t1,t2;
    cin >> t1.h >> t1.m >> t1.s;
    cin >> t2.h >> t2.m >> t2.s;
    cout << difference(t1,t2);
}