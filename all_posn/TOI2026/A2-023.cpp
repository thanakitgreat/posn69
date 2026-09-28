#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

B r_check(C a){
    B check = false;
    if(a == 'a') check = true;
    return check;
}

B a_check(C a){
    B check = false;
    if(a == 'r' or a == 'a') check = true;
    return check;
}

B b_check(C a){
    B check = false;
    if(a == 'i' or  a == 't') check =  true;
    return check;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S rabbit;
    L check = 0;
    L a_max = 0,a_cmax = 0,wrong_pos = 1e18;
    L r_count = 0,a_count = 0,b_count = 0;
    cin >> rabbit;

    transform(rabbit.begin(),rabbit.end(),rabbit.begin(),[](unsigned char b){return tolower(b);});

    for(int i = 0 ; i < rabbit.length() ; i++){
        if(rabbit[i] == 'r'){
            if (!r_check(rabbit[i+1]) or i == rabbit.length()-1){
                check = 1;
                if(i+1 < wrong_pos) wrong_pos = i+1;
            }
            r_count++;
        }else if(rabbit[i] == 'a'){
            if(i == 0){
                check = 1;
                if(i < wrong_pos) wrong_pos = i;
            }else{
                if(!a_check(rabbit[i-1])){
                    check = 1;
                    if(i < wrong_pos) wrong_pos = i;
                }
            }
            a_cmax++;
            a_count++;
        }else if(rabbit[i] == 'b'){
            if (!b_check(rabbit[i+1]) or i == rabbit.length()-1){
                check = 1;
                if(i+1 < wrong_pos) wrong_pos = i+1;
            }
            b_count++;
        }
        if(rabbit[i] != 'a' or i == rabbit.length()-1){
            if(a_cmax > a_max) a_max = a_cmax;
            a_cmax = 0;
        }
    }
    if (r_count == 0 and a_count == 0 and b_count == 0) check = -1;
    if(check == 1){
        cout << "no " << wrong_pos;
    }else if (check == 0){
        cout << "yes " << a_max;
    }else if (check == -1){
        cout << "unknown " << rabbit.length();
    }
}