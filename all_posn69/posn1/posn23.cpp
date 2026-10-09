#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int get_day_of_week(int d, int m, int y) {
    int orig_m = m;
    int orig_y = y;
    if (m == 1) { m = 13; y--; }
    else if (m == 2) { m = 14; y--; }
    int C_val = y / 100;
    int D_val = y % 100;
    int F = d + ((13 * m - 1) / 5) + D_val + (D_val / 4) + (C_val / 4) - 2 * C_val;
    return (F % 7 + 7) % 7;
}

B isValidDate(int d, int m, int y) {
    if (m < 1 || m > 12 || d < 1) return false;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return d <= daysInMonth[m];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    while (N--) {
        S date_str;
        cin >> date_str;

        if (date_str.length() != 10 || date_str[2] != '/' || date_str[5] != '/') {
            cout << "ERROR\n";
            continue;
        }

        int d, m, y;
        try {
            d = stoi(date_str.substr(0, 2));
            m = stoi(date_str.substr(3, 2));
            y = stoi(date_str.substr(6, 4));
        } catch (...) {
            cout << "ERROR\n";
            continue;
        }

        if (!isValidDate(d, m, y)) {
            cout << "ERROR\n";
            continue;
        }

        if (y < 1995) {
            cout << "ERROR: The game did not exist yet.\n";
            continue;
        }

        S game_name = (y > 2021) ? "eFootball" : "PES";
        int dow = get_day_of_week(d, m, y);

        if (m == 1 && d <= 5) {
            cout << game_name << " Update: Free Player.\n";
        } else if (m % 3 == 0 && (d == 1 || d == 2)) {
            cout << game_name << " Update: (Every 3 Months).\n";
        } else if (dow == 5) {
            cout << game_name << " Update: (Weekly).\n";
        } else {
            cout << "No Update.\n";
        }
    }

    return 0;
}