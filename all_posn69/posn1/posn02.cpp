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
    
    L num,sum1 = 0,sum2 = 0; cin >> num;
    S stat,suit; B win1 = true,win2 = true,bj1 =false,bj2 = false;
    for(L i=0 ; i<num ; i++){
        cin >> suit >> stat;
        if(stat == "J" || stat == "Q" || stat == "K") sum1 += 10;
        else if(stat == "A") sum1 += 11;
        else sum1 += stoll(stat);
    }
    if(sum1 > 21) win1 = false;
    else if(sum1 == 21) bj1 = true;
    cin >> num;
    for(L i=0 ; i<num ; i++){
        cin >> suit >> stat;
        if(stat == "J" || stat == "Q" || stat == "K") sum2 += 10;
        else if(stat == "A") sum2 += 11;
        else sum2 += stoll(stat);
    }
    if(sum2 > 21) win2 = false;
    else if(sum2 == 21) bj2 = true;

    if(bj1) cout << "YAHU BLACKJACK\n";
    if(bj2) cout << "DEALER BLACKJACK\n";
    if(!win1) cout << "YAHU BUST\n";
    if(!win2) cout << "DEALER BUST\n";
    if(win1){
        if(win2){
            if(sum1 < sum2) cout << "DEALER WIN";
            else if(sum1 > sum2) cout << "YAHU WIN";
            else cout << "TIE";
        }else{
            cout << "YAHU WIN";
        }
    }else{
        if(win2) cout << "DEALER WIN";
        else cout << "TIE";
    }
} 