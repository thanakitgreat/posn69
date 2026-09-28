#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

B change(C a,C b){
    if(a == b){
        return true;
    }else{
        return false;
    }
}

void leb_missing(S leb){
    vector<C> lebs1(leb.length());
    L countL = 0,countR = 0;
    for(L i = 0 ; i < leb.length() ; i++){
        lebs1[i] = leb[i];
        if(leb[i] == '('){
            countL++;
        }else if(leb[i] == ')'){
            countR++;
        }

    }
    vector<C> lebs2 = lebs1;
    L len = lebs2.size();
    if(countL != countR){
        L count;
        for(L i = 0 ; i < lebs2.size() ; i++){
            C now = lebs2[i];
            C bef = lebs2[i-1];
            C aft = lebs2[i+1];
            if(i == 0){
                if(now == '('){
                    countL++;
                }else if(now == ')'){
                    lebs2.insert(lebs2.begin(),'(');
                    i == 2;
                }
            }else{
                if(now == '('){
                    if(count > 0){
                        
                    }
                }else if(now == ')'){
                    if(leb[i-1] == '('){
                        countL++;
                    }else if(leb[i-1] == ')'){
                        count--;
                    }
                }
            }
        }
    }
    for(C a : lebs2){
        cout << a << " ";
    }
    cout << "\n" << abs(countL-countR);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S leb;
    getline(cin,leb);
    leb_missing(leb);
}