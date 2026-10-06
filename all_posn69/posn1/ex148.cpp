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
    
    S text,in; getline(cin,text);
    L count = 0;
    stringstream ss(text);
    vector<L> cords(4);
    vector<S> piece(2);
    while(ss >> in){
        if(count < 4) {cords[count] = stoll(in.substr(0,1)); count++;}
        else {piece[count-4] = in.substr(0,in.length()-1); count++;}
    }
    S wp = piece[0],bp=piece[1]; B stat = false;
    L dx = abs(cords[0]-cords[2]),dy = abs(cords[1]-cords[3]);
    if(wp == "PAWN"){
        if(dx == 1 && dy == 1){
            
        }
    }
}