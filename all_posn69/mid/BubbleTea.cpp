#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

void serve(vector<S> &students,vector<L> &sweetnessLevels) {
    for(L i=0 ; i<students.size() ; i++){
        cout << students[i] << " swt " << sweetnessLevels[i] << "%" << "\n";
    }
}

double calavg(const vector<double> &scores){
    D sum = 0;
    for(D i : scores) sum += i;
    return sum/scores.size()/1.0;
}

int main(){
    L num,sweet,score; cin >> num;
    D sum = 0;
    S id; vector<S> stud(num);
    vector<L> sweets(num);
    vector<D> scores(num);
    for(L i=0 ; i<num ; i++){
        cin >> stud[i] >> sweets[i] >> scores[i];
    }
    serve(stud,sweets);
    cout << fixed << setprecision(2);
    cout << "avg score: " << calavg(scores);
}