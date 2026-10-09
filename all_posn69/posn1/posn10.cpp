 #include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

struct Monster {
    int id;
    L H, C, A, G, W;
    int T;
};

int N;
L M_init, K_max, P_init, B_bonus, D_reduce;
vector<Monster> monsters;

struct Plan {
    L total_power;
    L remaining_mana;
    int total_soldiers;
    vector<int> extracted_ids;

    B operator<(const Plan& other) const {
        if (total_power != other.total_power) return total_power < other.total_power;
        if (remaining_mana != other.remaining_mana) return remaining_mana < other.remaining_mana;
        if (total_soldiers != other.total_soldiers) return total_soldiers < other.total_soldiers;
        return extracted_ids > other.extracted_ids;
    }
};

Plan best_plan;

void solve_dfs(int mask, L cur_power, L cur_mana, L cur_weight, int k_cnt, int m_cnt, int a_cnt, vector<int>& seq) {
    int units = min({k_cnt, m_cnt, a_cnt});
    L total_power = cur_power + units * B_bonus;
    
    vector<int> sorted_ids = seq;
    sort(sorted_ids.begin(), sorted_ids.end());

    Plan cur_plan = {total_power, cur_mana, (int)seq.size(), sorted_ids};
    if (best_plan < cur_plan) {
        best_plan = cur_plan;
    }

    for (int i = 0; i < N; i++) {
        if (!(mask & (1 << i))) {
            const auto& m = monsters[i];
            if (total_power >= m.H) {
                L cost = max(0LL, m.C - m_cnt * D_reduce);
                if (cur_mana >= cost && cur_weight + m.W <= K_max) {
                    seq.push_back(m.id);
                    solve_dfs(mask | (1 << i), 
                              cur_power + m.A, 
                              cur_mana - cost + m.G, 
                              cur_weight + m.W, 
                              k_cnt + (m.T == 1), 
                              m_cnt + (m.T == 2), 
                              a_cnt + (m.T == 3), 
                              seq);
                    seq.pop_back();
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    if (!(cin >> N >> M_init >> K_max >> P_init >> B_bonus >> D_reduce)) return 0;

    monsters.resize(N);
    for (int i = 0; i < N; i++) {
        monsters[i].id = i + 1;
        cin >> monsters[i].H >> monsters[i].C >> monsters[i].A >> monsters[i].G >> monsters[i].W >> monsters[i].T;
    }

    best_plan = {-1, -1, -1, {}};
    vector<int> seq;
    solve_dfs(0, P_init, M_init, 0, 0, 0, 0, seq);

    cout << best_plan.total_power << " " << best_plan.remaining_mana << " " << best_plan.total_soldiers << "\n";
    for (size_t i = 0; i < best_plan.extracted_ids.size(); i++) {
        cout << best_plan.extracted_ids[i] << (i + 1 == best_plan.extracted_ids.size() ? "" : " ");
    }
    cout << "\n";

    return 0;
}