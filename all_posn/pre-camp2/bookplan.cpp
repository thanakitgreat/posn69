#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

struct Book {
    L code;
    int rem;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    map<L, vector<Book>> arrivals;
    for (int i = 0; i < N; i++) {
        L code, day;
        int times;
        cin >> code >> day >> times;
        arrivals[day].push_back({code, times});
    }

    deque<Book> q;
    Book prev_book = {0, 0};
    B has_prev = false;
    L curr_day = 0;

    auto it_arrival = arrivals.begin();

    while (true) {
        if (q.empty() && !has_prev) {
            if (it_arrival == arrivals.end()) break;
            curr_day = max(curr_day, it_arrival->first);
        }

        // นำหนังสือที่มาถึงวันนี้เข้าคิว
        if (it_arrival != arrivals.end() && it_arrival->first == curr_day) {
            for (const auto& b : it_arrival->second) {
                q.push_back(b);
            }
            it_arrival++;
        }

        // นำหนังสือของเมื่อวานที่ยังอ่านไม่ครบต่อท้ายคิว
        if (has_prev && prev_book.rem > 0) {
            q.push_back(prev_book);
            has_prev = false;
        }

        // อ่านหนังสือหัวคิว
        if (!q.empty()) {
            Book read_b = q.front();
            q.pop_front();

            cout << read_b.code << " : " << read_b.rem << "\n";
            read_b.rem--;

            if (read_b.rem > 0) {
                prev_book = read_b;
                has_prev = true;
            }
            curr_day++;
        } else {
            has_prev = false;
        }
    }

    return 0;
}