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

    L kid,score,max_score = -1,min_score = 101;
    D sum = 0;
    vector<L> scores;
    cin >> kid;
    for(L i = 0 ; i < kid ; i++){
        cin >> score;
        scores.push_back(score);
        sum += score;
    }
    for(L i = 0 ; i < kid ; i++){
        if(max(max_score,scores[i]) == scores[i]) max_score = scores[i];
        if(scores[i] < min_score) min_score = scores[i];
    }
    cout << "Student: ";
    for(L i = 1 ; i <= kid ; i++){
        cout << "Student" << i << ": ";
    }
    cout << "\n";
    cout << "Highest score: " << max_score << "\n";
    cout << "Lowest score: " << min_score << "\n";
    D aver = sum/kid;
    cout << fixed << setprecision(1) << "Average score: " << aver << '\n';;
    cout << "Students who scored above average:\n";
    for(L i = 1 ; i <= kid ; i++){
        if(scores[i-1] > aver){
            cout << "Student " << i << "\n";
        }
    }
}