#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

// Convert decimal to binary using string to prevent overflow for large N
string getBinary(int n) {
    if (n == 0) return "0";
    string res = "";
    while (n > 0) {
        res += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

// Convert decimal to octal
string getOctal(int n) {
    if (n == 0) return "0";
    string res = "";
    while (n > 0) {
        res += to_string(n % 8);
        n /= 8;
    }
    reverse(res.begin(), res.end());
    return res;
}

// Convert decimal to hexadecimal (Uppercase)
string getHex(int n) {
    if (n == 0) return "0";
    string res = "";
    char hexChars[] = "0123456789ABCDEF";
    while (n > 0) {
        res += hexChars[n % 16];
        n /= 16;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    // Read as double to handle cases like "10.00" shown in the prompt
    double input;
    if (!(cin >> input)) return 0;

    // Convert to integer for base conversion
    int n = (int)input;

    // Check boundary: 0 <= N <= 100000 (Inclusive)
    if (n < 0 || n > 100000) return 0;

    // Output precisely in the order: Binary, Octal, Hexadecimal
    cout << getBinary(n) << endl;
    cout << getOctal(n) << endl;
    cout << getHex(n) << endl;

    return 0;
}