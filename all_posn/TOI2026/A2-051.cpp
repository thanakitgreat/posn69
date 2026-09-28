#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef double D;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L team,player,score;
    L sum = 0;
    cin >> team >> player;
    for(L i = 1 ; i <= team ; i++){
        D sum1 = 0;
        vector<L> scores;
        L s_max = -1;
        for(L j = 1 ; j <= player ; j++){
            cin >> score;
            scores.push_back(score);
            sum1 += score;
            sum += score;
        }
        for(L a : scores){
            if(max(s_max,a) == a) s_max = a;
        }
        cout << fixed << setprecision(2);
        cout << "Team " << i << ": Average = " 
        << sum1/player << ", Max = " << s_max << "\n";
    }
    cout << "Total Score of All Teams = " << sum;
}