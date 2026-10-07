// อย่าลืมลบ HEADER ก่อนส่ง
#include <iostream>
using namespace std;

// ส่งเฉพาะ FUNCTION
int longestIncreasingSubsequence(int n,
                                 const int heights[]) {
    // ใส่โค้ดฟังก์ชันหาความยาวของลำดับเพิ่มขึ้นอย่างเคร่งครัดที่ยาวที่สุดตรงนี้
    //
    // n          = จำนวนโคม
    // heights[i] = ความสูงของโคมลำดับที่ i
    //
    // ลำดับที่เลือกต้องคงลำดับเดิม และค่าต้องเพิ่มขึ้นอย่างเคร่งครัด
    // คืนค่าความยาวของ Longest Increasing Subsequence (LIS)
}

// อย่าลืมลบ MAIN ก่อนส่ง
int main() {
    int n;
    if (!(cin >> n)) return 1;

    int* heights = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    cout << longestIncreasingSubsequence(n, heights) << '\n';

    delete[] heights;

    return 0;
}
