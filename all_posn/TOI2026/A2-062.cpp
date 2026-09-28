#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    S text;
    vector<L> v_counts = {0,0,0,0,0};
    vector<C> vowels = {'a','e','i','o','u'};
    getline(cin,text);
    transform(text.begin(), text.end(), text.begin(),
    [](unsigned char c){ return static_cast<char>(tolower(c)); });
    for(C a : text){
        if(a == 'a'){
            v_counts[0]++;
        }else if(a == 'e'){
            v_counts[1]++;
        }else if(a == 'i'){
            v_counts[2]++;
        }else if(a == 'o'){
            v_counts[3]++;
        }else if(a == 'u'){
            v_counts[4]++;
        }
    }
    for(L i = 0 ; i < 5 ; i++){
        if(v_counts[i] != 0){
            cout << vowels[i] << ": " << v_counts[i] << "\n";
        }
    }
}