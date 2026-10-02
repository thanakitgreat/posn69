#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    D pi = 3.14159265358979323846;
    L num,rad; cin >> num;
    D maxA = -1,maxP = -1;
    for(L i=1 ; i<=num ; i++){
        cin >> rad;
        D area = rad*rad*pi, peri = 2*rad*pi;
        cout << fixed << setprecision(3);
        cout << "Area of circle " << i << ": " << area << "\n"
        << "Perimeter of circle " << i << ": " << peri << "\n";
        maxA = max(maxA,area); maxP = max(maxP,peri);
    }
    cout << "The maximum area is: " << maxA << "\n" <<
    "The maximum perimeter is: " << maxP;
}