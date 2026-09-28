#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L num,code;
    vector<L> codes;
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> code;
        if (i == 0){
            codes.push_back(code);
        }else{
            L pos = -1;
            for(L j = 0 ; j < codes.size() ; j++){
                if (codes.at(j) == code){
                    pos = j;
                    break;
                }
            }
            if (pos == -1){
                codes.push_back(code);
            }else{
                codes.erase(codes.begin()+pos);
            }
        }
        
    }
    sort(codes.begin(),codes.end());
    for(L a : codes){
        cout << a << " ";
    }
}