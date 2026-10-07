// อย่าลืมลบ HEADER ก่อนส่ง
#include <iostream>
using namespace std;

// ส่งเฉพาะ FUNCTION
int countCoinWays(int n, int x,
                  const int coins[]) {
    // ใส่โค้ดฟังก์ชันนับจำนวนวิธีหยอดเหรียญให้ได้ผลรวม x ตรงนี้
    //
    // n        = จำนวนชนิดเหรียญ
    // x        = จำนวนเงินเป้าหมาย
    // coins[i] = มูลค่าของเหรียญชนิดที่ i
    //
    // ไม่นับลำดับของการหยอดเหรียญ
    // เช่น 1+2 และ 2+1 ถือเป็นวิธีเดียวกัน
    //
    // คืนค่าจำนวนวิธี modulo 1,000,000,007
}

// อย่าลืมลบ MAIN ก่อนส่ง
int main() {
    int n, x;
    if (!(cin >> n >> x)) return 1;

    int* coins = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    cout << countCoinWays(n, x, coins) << '\n';

    delete[] coins;

    return 0;
}
