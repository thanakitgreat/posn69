#include <iostream>
#include <vector>
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
    string a;
    vector<char> b;
    getline(cin,a);
    for (char c : a){
        if (isalpha(c)){
            int d = 0;
            if (b.size() != 0){
                for (int i = 0 ; i < b.size() ; i++){
                    if (c == b[i]){
                        d++;
                    }
                }
                if (d == 0){
                    b.push_back(c);
                }
            }else{
                b.push_back(c);
            }
        }
    }
    cout << b.size();
    return 0;
}