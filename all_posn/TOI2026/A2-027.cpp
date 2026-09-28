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

    L num,score,top = 0;
    vector<L> scores;
    cin >> num;
    for(L i = 0 ; i < num ; i++){
        cin >> score;
        scores.push_back(score);
    }
    sort(scores.begin(),scores.end(),greater<L>());
    for(L i = 0 ; i < num ; i++){
        if(scores[i] == scores[0]){
            top++;
        }else{
            break;
        }
    }
    cout << scores[0] << "\n" << top;
}