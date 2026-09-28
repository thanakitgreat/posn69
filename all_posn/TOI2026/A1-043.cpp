#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L s_base,s_bonus,s_day,s_sum;
    cin >> s_base >> s_bonus >> s_day;
    if (s_day > 3){
        s_sum = (s_base + s_bonus)*1.5;
    }else{
        s_sum = s_base + s_bonus;
    }
    cout << s_sum << "\n";
    if (s_sum >= 1500){
        cout << 5 << "\n";
    }else if(s_sum < 1500 and s_sum >= 1000){
        cout << 4 << "\n";
    }else if(s_sum < 1000 and s_sum >= 500){
        cout << 3 << "\n";
    }else if(s_sum < 500 and s_sum >= 200){
        cout << 2 << "\n";
    }else if(s_sum < 200){
        cout << 1 << "\n";
    }
    if (s_sum >= 1500 and s_day >= 7){
        cout << 99;
    }else if((s_sum < 1500 and s_sum >= 1000) and s_bonus > 300){
        cout << 99;
    }else{
        cout << 0;
    }
}