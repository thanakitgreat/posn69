// อย่าลืมลบ HEADER ก่อนส่ง
#include <iostream>
#include <string>
using namespace std;

// ส่งเฉพาะ FUNCTION
int editDistance(const char a[], int n,
                 const char b[], int m) {
    // ใส่โค้ดฟังก์ชันหาจำนวนคำสั่งน้อยที่สุดในการเปลี่ยน a ให้เป็น b ตรงนี้
    //
    // a = ข้อความต้นฉบับ
    // n = ความยาวของ a
    // b = ข้อความเป้าหมาย
    // m = ความยาวของ b
    //
    // อนุญาตให้ใช้คำสั่ง ลบ แทรก และเปลี่ยนตัวอักษร
    // คืนค่าจำนวนคำสั่งน้อยที่สุด
}

// อย่าลืมลบ MAIN ก่อนส่ง
int main() {
    string a, b;
    if (!(cin >> a >> b)) return 1;

    cout << editDistance(a.c_str(), (int)a.size(),
                         b.c_str(), (int)b.size()) << '\n';

    return 0;
}
