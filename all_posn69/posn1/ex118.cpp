#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

const long long INF = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K; cin >> K;
    vector<long long> prices;
    long long price;
    while (cin >> price) prices.push_back(price);
    if (prices.empty() || K == 0) {
        cout << 0 << "\n";
        return 0;
    }
    vector<long long> hold(K + 1, -INF);
    vector<long long> sell(K + 1, 0);

    for (long long p : prices) {
        for (int t = K; t >= 1; --t) {
            sell[t] = max(sell[t], hold[t] + p);
            hold[t] = max(hold[t], sell[t - 1] - p);
        }
    }
    cout << sell[K] << "\n";
    return 0;
}