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
    L first,second;
    vector<L> firsts;
    vector<L> seconds;
    deque<C> status;
    B input = true;
    while(input){
        cin >> first >> second;
        if(second != 0){
            firsts.push_back(first);
            seconds.push_back(second);
        }else{
            firsts.push_back(first);
            input = false;
        }
    }
    L size = seconds.size();
    for(L i = size ; i > 0 ; i--){
        if(firsts[i] == seconds[i-1]){
            status.push_front('P');
        }else{
            status.push_front('X');
        }
    }
    for(L i = size ; i > 0 ; i--){
        cout << i << status[i-1] << "\n";
    }
    return 0;
}