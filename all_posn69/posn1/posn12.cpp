#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    L n;
    if (cin >> n) {
        L count = 0;
        while (n >= 5) {
            count += n / 5;
            n /= 5;
        }
        cout << count << "\n";
    }
    return 0;
}