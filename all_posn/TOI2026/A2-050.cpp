#include <bits/stdc++.h>
using namespace std;

typedef char C;
typedef bool B;
typedef long long L;
typedef string S;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S code;
    cin >> code;
    C lettN[26] = {'A','B','C','D','E','F','G','H','I','J',
                'K','L','M','N','O','P','Q','R','S','T',
                'U','V','W','X','Y','Z'};
    C lettR[26] = {'Z','Y','X','W','V','U','T','S','R','Q',
                'P','O','N','M','L','K','J','I','H','G',
                'F','E','D','C','B','A'};
    L size = stoll(code.substr(0, code.size()-1));
    if(size%2){
        if(code[code.size()-1] == '#'){ // sym odd
            L mid = size/2 + 1;
            for(L i = 1 ; i <= size ; i++){
                for(L j = 1 ; j <= size ; j++){
                    if(i != mid){
                        if(i == 0 or i == size){
                            if(j == mid) cout << '#';
                            else cout << '-';
                        }else{
                            if(j == abs(mid-i)+1 or j == size-abs(mid-i))
                            cout << '#';
                            else cout << '-';
                        }
                    }else{
                        if(j == 1 or j == size) cout << '#';
                        else cout << '-';
                    }
                }
                cout << "\n";
            }
        }else{ // lett odd
            C lett = code[code.size()-1];
            L mid = size/2 + 1,start = lett - 'A',index = 0;
            for(L i = 1 ; i <= size ; i++){
                for(L j = 1 ; j <= size ; j++){
                    if(i != mid){
                        if(i == 0 or i == size){
                            if(j == mid) cout << lettN[(+index)%26];
                            else cout << '-';
                        }else{
                            if(j == abs(mid-i)+1 or j == size-abs(mid-i)){
                                cout << lettN[(start+index)%26];
                            }else{
                                cout << '-';
                            }
                        }
                    }else{
                        if(j == 1 or j == size) cout << lettN[start];
                        else cout << '-';
                    }
                }
                cout << "\n";
            }
        }
    }else{
        if(code[code.size()-1] == '#'){ // sym even
            L midC = size/2 +1;
            for(L i = 1 ; i <= size ; i++){
                for(L j = 1 ; j <= size-1 ; j++){
                    if(i == 1 or i == size){
                        if(j == midC-1) cout << '#';
                        else cout << '-';
                    }else{
                        L mid = size/2;
                        if(i < midC){
                            if(j == abs(mid-i)+1 or j == size-abs(mid-i)-1) cout << '#';
                            else cout << '-';
                        }else{
                            mid++;
                            if(j == abs(mid-i)+1 or j == size-abs(mid-i)-1) cout << '#';
                            else cout << '-';
                        }
                    }
                }
                cout << "\n";
            }
        }else{ // lett even
            L midC = size/2 +1;
            for(L i = 1 ; i <= size ; i++){
                for(L j = 1 ; j <= size-1 ; j++){
                    if(i == 1 or i == size){
                        if(j == midC-1) cout << '#';
                        else cout << '-';
                    }else{
                        L mid = size/2;
                        if(i < midC){
                            if(j == abs(mid-i)+1 or j == size-abs(mid-i)-1) cout << '#';
                            else cout << '-';
                        }else{
                            mid++;
                            if(j == abs(mid-i)+1 or j == size-abs(mid-i)-1) cout << '#';
                            else cout << '-';
                        }
                    }
                }
                cout << "\n";
            }
        }
    }
}