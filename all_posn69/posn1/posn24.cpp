#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

struct Candidate {
    int id;
    D score;

    S getChemistry() const {
        if (score <= 25.00) return "Low Chemistry";
        if (score <= 45.00) return "Below Average Chemistry";
        if (score <= 60.00) return "Average Chemistry";
        if (score <= 75.00) return "Above Average Chemistry";
        if (score <= 89.00) return "High Chemistry";
        return "Perfect Chemistry";
    }
};

B compareCandidates(const Candidate& a, const Candidate& b) {
    if (abs(a.score - b.score) > 1e-9) return a.score > b.score;
    return a.id < b.id;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int K;
    if (!(cin >> K)) return 0;

    D score;
    int id_counter = 1;
    vector<Candidate> valid_list;

    while (cin >> score) {
        if (score >= 0.00) {
            valid_list.push_back({id_counter, score});
        }
        id_counter++;
    }

    sort(valid_list.begin(), valid_list.end(), compareCandidates);

    int limit = min((int)valid_list.size(), K);
    cout << fixed << setprecision(2);
    for (int i = 0; i < limit; i++) {
        cout << "Rank " << (i + 1) << " | ID: " << valid_list[i].id 
             << " | " << valid_list[i].score << "% | " 
             << valid_list[i].getChemistry() << "\n";
    }

    return 0;
}