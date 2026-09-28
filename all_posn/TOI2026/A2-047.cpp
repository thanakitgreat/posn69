#include <bits/stdc++.h>
using namespace std;

typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 3e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text,word;
    L num;
    cin >> num;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(L i = 0 ; i < num ; i++){
        vector<S> word_full;
        getline(cin,text);
        SS wordss(text);
        B qstat = false,hstat = false,bstat = false,nstat = false;
        L lensum = 0;
        while(wordss >> word){
            word_full.push_back(word);
            lensum += word.length();

            word.erase(remove_if(word.begin(), word.end(),
            [](unsigned char c){return !isalnum(c);}), word.end());

            transform(word.begin(), word.end(), word.begin(), 
            [](unsigned char c) { return ::tolower(c); });

            if(word == "hello" || word == "hi") hstat = true;
            if(word == "bye" || word == "goodbye") bstat = true;
            for(C a : word){
                if(isdigit(a) && !nstat){
                    nstat = true;
                    break;
                }
            }
            
        }
        if (!word_full.empty()){
            const S& last = word_full.back();
            if (last.back() == '?') qstat = true;
        }

        if(hstat) cout << "Hello! How can I help you?\n";
        else if(bstat) cout << "Goodbye! Have a nice day!\n";
        else if(qstat) cout << "That's an interesting question!\n";
        else if(nstat) cout << "I see some numbers there!\n";
        else if(lensum > 19) cout << "That's quite a long message!\n";
        else cout << "I understand.\n";
    }
}