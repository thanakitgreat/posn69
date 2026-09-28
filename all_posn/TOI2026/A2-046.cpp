#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;

int main(){
    
    L line;
    S text;
    vector<S> texts;
    cin >> line;
    cin.ignore();
    for(L i = 0 ; i < line ; i++){
        getline(cin,text);
        texts.push_back(text);
    }
    L temp = 1;
    for(const string& s : texts){
        L max_v = 0,cmax_v = 0,count = 0;
        for(L j = 0 ; j < s.length() ; j++){
            C a = s[j];
            C b = tolower(a);
            if(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'){
                count++;
                cmax_v++;
            }else{
                if(cmax_v > max_v){
                    max_v = cmax_v;
                }
                cmax_v = 0;
            }
        }
        if(cmax_v > max_v){
            max_v = cmax_v;
        }
        cmax_v = 0;
            cout << "Line " << temp << ": " << "vowels = " << count
        << ", max consecutive = " << max_v << "\n";  
        temp++;
    }
}
