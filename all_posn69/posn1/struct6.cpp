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
    
    stack<C> brac;
    S text; getline(cin,text);
    B stat = true;
    for(L i=0 ; i<text.length() ; i++){
        C j = text[i];
        if(i == 0){
            if(j == ')' || j == ']' || j == '}'){
                stat = false;
                break;
            }else{
                brac.push(j);
            }
        }else{
            if(j == ')'){
                if(brac.top() == '(') brac.pop();
                else {stat= false; break;}
            }else{
                if(j == ']'){
                    if(brac.top() == '[') brac.pop();
                    else {stat= false; break;}
                }else{
                    if(j == '}'){
                        if(brac.top() == '{') brac.pop();
                        else {stat= false; break;}
                }
            }
        }
    }
    }
    if(stat) cout << "YES";
    else cout <<"NO";
}