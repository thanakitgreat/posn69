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

    L length,pos,pos1,pos2;
    S turn;
    vector<L> poss;
    cin >> length;
    for(L i = 0 ; i < length ; i++){
        cin >> pos;
        if(pos == 1){
            pos1 = i;
        }else if(pos == 2){
            pos2 = i;
        }
        poss.push_back(pos);
    }
    cin >> turn;
    for(char a : turn){
        if(a == 'L'){
            if(pos1 != 0){
                if(poss[pos1-1] != 2){
                    swap(poss[pos1],poss[pos1-1]);
                    pos1--;
                }else{
                    poss[pos1] = 0;
                    poss[pos1-1] = 1;
                    break;
                }
            }
        }else if(a == 'R'){
            if(pos1 != length-1){
                if(poss[pos1+1] != 2){
                    swap(poss[pos1],poss[pos1+1]);
                    pos1++;
                }else{
                    poss[pos1] = 0;
                    poss[pos1+1] = 1;
                    break;
                }
            }else{
                continue;
            }
        }
    }
    for(L a : poss){
        cout << a << " ";
    }
}