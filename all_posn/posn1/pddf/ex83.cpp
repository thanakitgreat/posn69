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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text;
    cin >> text;
    L len = text.length();
    vector<C> lett;
    vector<L> freq;
    vector<L> sortNum;
    vector<C> sortLett;
    S newWord = "";
    for(L i = 0 ; i < len ; i++){
        C cha = text[i];
        auto it = find(lett.begin(),lett.end(),cha);
        if(it != lett.end()){
            L ind = distance(lett.begin(),it);
            freq[ind]++;            
        }else{
            lett.push_back(cha);
            freq.push_back(1);
        }
    }
    for(L i = 0 ; i < freq.size() ; i++){
        L num = freq[i];
        auto it = find(sortNum.begin(),sortNum.end(),num);
        if(it == sortNum.end()){
            sortNum.push_back(num);
        }
    }
    sort(sortNum.begin(),sortNum.end());
    for(L i = sortNum.size()-1 ; i >= 0 ; i--){
        for(L j = 0 ; j < freq.size() ; j++){
            if(freq[j] == sortNum[i]) sortLett.push_back(lett[j]);
        }
        sort(sortLett.begin(),sortLett.end());
        for(L j = 0 ; j < sortLett.size() ; j++){
            newWord += S(sortNum[i],sortLett[j]);
        }
        sortLett.clear();
    }
    cout << newWord;
}