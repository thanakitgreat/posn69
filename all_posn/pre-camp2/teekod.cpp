#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef char C;
typedef bool B;
typedef string S;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    S text,edit = "";
    B stat = true; deque<S> ans;
    getline(cin,text);
    for(L j=0 ; j<text.length() ; j++){\
        C i = text[j];
        if(i != '[' && i != ']'){
            if(j != text.length()-1) edit += i;
            else{
                edit += i;
                if(stat) ans.push_back(edit);
                else ans.push_front(edit);
            }
        }
        else if(i == '['){
            if(stat) {ans.push_back(edit); edit = ""; stat = false;}
            else {ans.push_front(edit); edit = "";}
        }
        else if(i == ']'){
            if(stat) {ans.push_back(edit); edit = "";}
            else {ans.push_front(edit); edit = ""; stat = true;}
        }
    }
    for(S i : ans) cout << i;
}