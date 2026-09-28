#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L round,pea,pete,cher,pS = 0,PS = 0,CS = 0;
    cin >> round;
    for(L i = 0 ; i < round ; i++){
        cin >> pea >> pete >> cher;
        pS += pea;
        PS += pete;
        CS += cher;
    }
    cout << "Peanut: " << pS << "\n";
    cout << "Pete: " << PS << "\n";
    cout << "Chertam: " << CS << "\n";
    cout << "Winner: ";
    if(pS > PS && pS > CS) cout << "Peanut Score: " << pS;
    else if (PS > pS && PS > CS) cout << "Pete Score: " << PS;
    else if (CS > pS && CS > PS) cout << "Chertam Score: " << CS;
    else if (PS == pS && PS > CS) cout << "Peanut & Pete Score: " << PS;
    else if (PS == CS && PS > pS) cout << "Pete & Chertam Score: " << PS;
    else if (pS == CS && CS > PS) cout << "Peanut & Chertam Score: " << CS;
    else if (PS == pS && PS == CS) cout << "Peanut & Pete & Chertam Score: " << PS;
}