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

S anagramSwap(S word,S oldWord,S newWord){
    L len1 = word.length();
    L len2 = oldWord.length();
    if(len1 != len2){
        return word;
    }else{
        sort(oldWord.begin(),oldWord.end());
        B stat = false;
        while(next_permutation(oldWord.begin(),oldWord.end())){
            if(word == oldWord){
                stat = true;
                break;
            }
        }
        if(stat){
            return newWord;
        }else{
            return word;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text,newWord,oldWord,word;
    
    getline(cin,text);
    cin >> oldWord >> newWord;
    SS newText(text);
    while(newText >> word){
        cout << anagramSwap(word,oldWord,newWord) << " ";
    }
}