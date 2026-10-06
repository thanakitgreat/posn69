#include <iostream>
#include "boost_range.h"

int main() {
    int n;
    int a[100] = {};
    if (!(std::cin >> n) || n < 1 || n > 100) return 1;

    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> a[i])) return 1;
    }

    int l, r, delta;
    if (!(std::cin >> l >> r >> delta)) return 1;
    if (l < 0 || l > r || r >= n) return 1;

    boost_range(a + l, r - l + 1, delta);

    for (int i = 0; i < n; ++i) {
        if (i > 0) std::cout << ' ';
        std::cout << a[i];
    }
    std::cout << '\n';
    return 0;
}
