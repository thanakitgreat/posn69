#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

L power(L base, L exp) {
    L res = 1;
    for (int i = 0; i < exp; i++) res *= base;
    return res;
}

B isValidHex(const S& s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (!isxdigit(c)) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    S card_id;
    L ss_money;
    if (!(cin >> card_id >> ss_money)) return 0;

    if (card_id.length() >= 8) {
        int len = card_id.length();
        int A = card_id[len - 4] - '0';
        int B_digit = card_id[len - 3] - '0';
        int C_digit = card_id[len - 2] - '0';
        int S_digit = card_id[len - 1] - '0';

        L num = power(A, B_digit) + 4LL * A * C_digit;
        L den = 2LL * C_digit * A;

        if (den == 0 || (num / den) % 10 != S_digit) {
            cout << "INVALID CARD\n";
            return 0;
        }
    } else {
        cout << "INVALID CARD\n";
        return 0;
    }

    S code;
    vector<int> invalid_lines;
    D total_cost = 0;
    int line_no = 0;

    while (cin >> code && code != "-") {
        line_no++;
        if (!isValidHex(code)) {
            invalid_lines.push_back(line_no);
            continue;
        }

        L price = stoll(code, nullptr, 16);
        
        stringstream ss;
        ss << oct << price;
        L oct_code = stoll(ss.str());
        L category = oct_code % 1000;

        D ratio = 1.0;
        if (category <= 100) {
            ratio = 0.40;
        } else if (category <= 200) {
            ratio = 0.70;
        } else if (category <= 300) {
            ratio = 1.10;
        } else if (category <= 500) {
            ratio = (category >= 401) ? 1.00 : 1.00;
        } else if (category <= 600) {
            ratio = 0.60;
        } else if (category <= 800) {
            if (category >= 701) {
                if (ss_money > price) ratio = 0.20;
                else ratio = 1.50;
            }
        }

        total_cost += price * ratio;
    }

    if (!invalid_lines.empty()) {
        cout << "INVALID BARCODE AT LINE: ";
        for (size_t i = 0; i < invalid_lines.size(); i++) {
            cout << invalid_lines[i] << (i + 1 == invalid_lines.size() ? "" : ",");
        }
        cout << "\n";
    } else {
        cout << fixed << setprecision(2) << total_cost << "\n";
    }

    return 0;
}