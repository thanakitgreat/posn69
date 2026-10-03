// ### อย่าลืมลบ header ทุกตัวก่อนส่ง ###
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double w, h;
    if (cin >> w >> h) {
        cout << fixed << setprecision(2);
        cout << "Area = " << w*h << endl;
        cout << "Perimeter = " << w+w+h+h << endl;
    }
    return 0;
}