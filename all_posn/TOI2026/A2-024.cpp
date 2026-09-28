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

    vector<L> widths;
    vector<L> rewards;
    
    L length,point,rabbit,monkey,frog,width,reward;
    L rabbit_score = 0,monkey_score = 0,frog_score = 0;

    cin >> length >> point >> rabbit >> monkey >> frog;

    for(L i = 0 ; i < point ; i++){
        cin >> width >> reward;
        widths.push_back(width);
        rewards.push_back(reward);
    }
    for(L i = 0 ; i < point ; i++){
        if(widths[i] % rabbit == 0) rabbit_score += rewards[i];
        if(widths[i] % monkey == 0) monkey_score += rewards[i];
        if(widths[i] % frog == 0) frog_score += rewards[i];
    }
L max_score = max({rabbit_score, monkey_score, frog_score});

if (rabbit_score == max_score) cout << "Rabbit " << rabbit_score << "\n";
if (monkey_score == max_score) cout << "Monkey " << monkey_score << "\n";
if (frog_score == max_score) cout << "Frog " << frog_score << "\n";
    return 0;
}