#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

bool buu_check(S a){
    bool check = false;
    transform(a.begin(),a.end(),a.begin(),[](unsigned char c){return tolower(c);});
    for(L i = 0 ; i < a.length()-2 ; i++){
        if (a.substr(i,3) == "buu"){
            check = true;
        }
    }
    return check;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S code1,code2,decoded = "";
    L b_pos = 10,u_max = 0,u_cmax = 0;
    vector<C> buu = {'B','U','U'};
    cin >> code1;
    code2 = code1;
    transform(code1.begin(),code1.end(),code1.begin(),[](unsigned char c){return tolower(c);});
    for(L i = 0 ; i < code1.length() ; i++){
        if (tolower(code1[i]) == 'b'){
            if (b_pos > i) b_pos = i;
        }
        if (tolower(code1[i]) == 'u'){
            u_cmax++;
        }
        if (tolower(code1[i]) != 'u' or i == code1.length()-1){
            if (u_cmax > u_max) u_max = u_cmax;
            u_cmax = 0;
        }
    }
    if (buu_check(code1)){
        cout << "Yes " << u_max;
    }else if(b_pos == 10){
        for(L i = 0 ; i < code1.length() ; i++){
            cout << buu[i%3];
        }
    }else if(b_pos != 10){
        for(L i = 0 ; i < code1.length() ; i++){
            if (i <= b_pos){
                cout << code2[i];
            }else{
                cout << 'U';
            }
        }
    }

}