// อย่าลืมลบ HEADER ก่อนส่ง
#include <iostream>
using namespace std;

// ส่งเฉพาะ FUNCTION
long long maxProfit(int n, int W,
                    const int weights[],
                    const long long values[]) {
    vector<long long> dp(W + 1, 0);

    for (int i = 0; i < n; i++) {
        // วนลูปถอยหลังเพื่อให้แต่ละสินค้าถูกเลือกได้ไม่เกิน 1 ครั้ง (0/1 Knapsack)
        for (int j = W; j >= weights[i]; j--) {
            dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);
        }
    }

    return dp[W];
}

// อย่าลืมลบ MAIN ก่อนส่ง
int main() {
    int n, W;
    if (!(cin >> n >> W)) return 1;

    int* weights = new int[n];
    long long* values = new long long[n];

    for (int i = 0; i < n; i++) {
        cin >> weights[i] >> values[i];
    }

    cout << maxProfit(n, W, weights, values) << '\n';

    delete[] weights;
    delete[] values;

    return 0;
}
