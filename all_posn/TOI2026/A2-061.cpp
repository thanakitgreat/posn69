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

    L score1,score2;
    vector<L> score = {0,0,0,0};
    vector<S> names = {"CHE","LIV","MUN","NEW"};

    for(L i = 0 ; i < 4 ; i++){
        for(L j = i+1 ; j < 4 ; j++){
            cin >> score1 >> score2;
            if(score1 > score2){
                score[i] += 3;
            }else if(score2 > score1){
                score[j] += 3;
            }else{
                score[i]++;
                score[j]++;
            }
        }
    }
    for(L i = 1 ; i <= 4 ; i++){
        L maxv = -1,maxpos = 0;
        for(L j = 0 ; j < score.size() ; j++){
            if(score[j] > maxv){
                maxpos = j;
                maxv = score[j];
            }
        }
        cout << i << ". " << names[maxpos] 
        << " " << score[maxpos] << "\n";
        score.erase(score.begin()+maxpos);
        names.erase(names.begin()+maxpos);
    }

 }