#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

bool parlin_check(S a){
    bool check = true;
    for(int i = 0 ; i < a.length() ; i++){
        if (a[i] != a[a.length()-i-1]){
            check = false;
            break;
        }
    }
    return check;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    S code;
    S text = "";
    cin >> code;
    L d1 = code[0] - '0';
    L d2 = code[1] - '0';
    L d3 = code[2] - '0';
    L d4 = code[3] - '0';
    L d5 = code[4] - '0';

    if (d1 > 5){
        text += "9";
    }else if(d2 > 5){
        text += "10";
    }else if(d3 > 5){
        text += "11";
    }else if(d4 > 5){
        text += "12";
    }else if(d5 > 5){
        text += "14";
    }else{
        text += "13";
    }
    if(parlin_check(code)){
        if ((d1 + d5) > 5){
            text += "1";
        }else if((d2 * d4) > 5){
            text += "2";
        }else{
            text += "0";
        }
    }else{
        if(d5 != 0){
            if ((d1 / d5) > 5){
                text += "1";
            }else if((d2 - d5) > 5){
                text += "2";
            }else{
                text += "0";
            }
        }else{
            if((d2 - d5) > 5){
                text += "2";
            }else{
                text += "0";
            }
        }
    }
    if (d1 + d2 + d3 + d4 + d5 > 25){
        text += "1";
    }else if(d1 * d2 * d3 * d4 * d5 > 25){
        text += "2";
    }else{
        text += "0";
    }

    cout << stoll(text);

}