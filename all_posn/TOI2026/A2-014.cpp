#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

bool love_check(C a){
    if (a == 'l' or a == 'o' or a == 'v' or a == 'e'){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    vector<C> text;

    S name1,name2;
    L w_count = 0,w_max = 0,w_cmax = 0,l_max;

    cin >> name1 >> name2;
    
    l_max = max(name1.length(),name2.length());

    for(L i = 0 ; i < l_max ; i++){
        if(love_check(tolower(name1[i%(name1.length())])) or love_check(tolower(name2[i%(name2.length())]))){
            text.push_back('w');
            w_count++;
            w_cmax++;
        }else{
            text.push_back('$');
            if(w_cmax > w_max){
                w_max = w_cmax;
            }
            w_cmax = 0;
        }
    }
    for(L i = 0 ; i < text.size() ; i++){
        cout << text[i];
    }
    if (w_count % 2 == 1){
        cout << w_max;
    }else{
        if (w_max < 2){
            cout << '#';
        }
    }
    
}