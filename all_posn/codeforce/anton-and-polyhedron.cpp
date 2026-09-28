#include <iostream>
#include <string>
using namespace std;

typedef long long L;

L X(L a, L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    L a,c = 0;  
    cin >> a;
    string b;
    for (int i = 0 ; i < a ; i++){
        cin >> b;
        if (b == "Tetrahedron"){
            c += 4;
        }else if(b == "Cube"){
            c += 6;
        }else if(b == "Octahedron"){
            c += 8;
        }else if(b == "Dodecahedron"){
            c += 12;
        }else if(b == "Icosahedron"){
            c += 20;
        }
    }
    cout << c;
    return 0;
}