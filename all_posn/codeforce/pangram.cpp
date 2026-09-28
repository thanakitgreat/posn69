#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef long long L;

L X(L a,L b){
    L c = 1;
    for (L i = 0 ; i < b ; i++){
        c *= a;
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L a;
    string b;
    vector<char> c;
    cin >> a >> b;
    if (a < 1 || a > X(10,2)){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        char d = tolower(b[i]);
        if (i != 0){
            int e = 0;
            for (int j = 0 ; j < c.size() ; j++){
                if (c[j] == d) e++;
            }
            if (e == 0) c.push_back(d);
        }else{
            c.push_back(d);
        }
    }
    if (c.size() == 26){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}