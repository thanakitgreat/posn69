#include <iostream>

using namespace std;

typedef long long L;
void Y() {
    L x; 
    if (!(cin >> x)) return;
    while (x--) {
        L n; 
        if (!(cin >> n)) break;
        L max_groups = n / 3; 
        cout << max_groups << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Y();   
    return 0;
}