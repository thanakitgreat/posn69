 #include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

B isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int daysInMonth(int y, int m) {
    if (m < 1 || m > 12) return 0;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && isLeapYear(y)) return 29;
    return days[m];
}

struct Date {
    int y, m, d;
    
    B isValid() const {
        if (m < 1 || m > 12) return false;
        if (d < 1 || d > daysInMonth(y, m)) return false;
        return true;
    }

    B isNextDayOf(const Date& prev) const {
        int dim = daysInMonth(prev.y, prev.m);
        if (prev.d < dim) {
            return (y == prev.y && m == prev.m && d == prev.d + 1);
        } else if (prev.m < 12) {
            return (y == prev.y && m == prev.m + 1 && d == 1);
        } else {
            return (y == prev.y + 1 && m == 1 && d == 1);
        }
    }

    S toDDMMYYYY() const {
        char buf[20];
        snprintf(buf, sizeof(buf), "%02d/%02d/%04d", d, m, y);
        return S(buf);
    }
};

Date parseDate(const S& s) {
    if (s.length() != 10 || s[4] != '-' || s[7] != '-') return {-1, -1, -1};
    try {
        int y = stoi(s.substr(0, 4));
        int m = stoi(s.substr(5, 2));
        int d = stoi(s.substr(8, 2));
        return {y, m, d};
    } catch (...) {
        return {-1, -1, -1};
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    S line1;
    if (!getline(cin, line1)) return 0;
    while (!line1.empty() && (line1.back() == '\r' || line1.back() == '\n')) line1.pop_back();

    stringstream ss(line1);
    S token;
    vector<Date> parsed_dates;

    while (getline(ss, token, ',')) {
        size_t first = token.find_first_not_of(" \t");
        size_t last = token.find_last_not_of(" \t");
        if (first == S::npos) token = "";
        else token = token.substr(first, last - first + 1);
        
        Date dt = parseDate(token);
        parsed_dates.push_back(dt);
    }

    int max_len = 0;
    vector<Date> best_seq;
    vector<Date> curr_seq;

    for (const auto& dt : parsed_dates) {
        if (!dt.isValid()) {
            if ((int)curr_seq.size() > max_len) {
                max_len = curr_seq.size();
                best_seq = curr_seq;
            }
            curr_seq.clear();
        } else {
            if (curr_seq.empty()) {
                curr_seq.push_back(dt);
            } else {
                if (dt.isNextDayOf(curr_seq.back())) {
                    curr_seq.push_back(dt);
                } else {
                    if ((int)curr_seq.size() > max_len) {
                        max_len = curr_seq.size();
                        best_seq = curr_seq;
                    }
                    curr_seq = {dt};
                }
            }
        }
    }
    if ((int)curr_seq.size() > max_len) {
        max_len = curr_seq.size();
        best_seq = curr_seq;
    }

    cout << "=== PART 1: LONGEST DATE SEQUENCE ===\n";
    if (max_len == 0) {
        cout << "No valid sequence found.\n";
    } else {
        cout << "Max Sequence Length: " << max_len << "\n";
        cout << "Sequence:\n";
        for (const auto& dt : best_seq) {
            cout << dt.toDDMMYYYY() << "\n";
        }
    }
    cout << "\n";

    int N, M;
    if (cin >> N >> M) {
        vector<vector<L>> grid(N, vector<L>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> grid[i][j];
            }
        }

        vector<vector<L>> dp(N, vector<L>(M, 0));
        dp[0][0] = grid[0][0];
        for (int j = 1; j < M; j++) dp[0][j] = dp[0][j - 1] + grid[0][j];
        for (int i = 1; i < N; i++) dp[i][0] = dp[i - 1][0] + grid[i][0];

        for (int i = 1; i < N; i++) {
            for (int j = 1; j < M; j++) {
                dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        cout << "=== PART 2: MINIMUM ENERGY PATH ===\n";
        cout << "Min Energy Cost: " << dp[N - 1][M - 1] << "\n";
    }

    return 0;
}