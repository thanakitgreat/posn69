#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double time1, time2;
    if (!(cin >> time1 >> time2)) return 0;
    int h1 = (int)time1;
    int m1 = round((time1 - h1) * 100);
    int h2 = (int)time2;
    int m2 = round((time2 - h2) * 100);

    int total_min = (h2 * 60 + m2) - (h1 * 60 + m1);

    if (total_min < 0 || total_min > 1440) {
        cout << "ERROR";
        return 0;
    }
    if (total_min <= 15) {
        cout << "FREE";
        return 0;
    }
    int billable_hours = (total_min + 59) / 60;
    if (billable_hours == 1) cout << 25;
    else if (billable_hours == 2) cout << 50;
    else if (billable_hours == 3) cout << 80;
    else if (billable_hours == 4) cout << 110;
    else if (billable_hours == 5) cout << 145;
    else if (billable_hours == 6) cout << 180;
    else if (billable_hours >= 7 && billable_hours <= 24) cout << 250;
    else cout << "ERROR";

    return 0;
}