#include <iostream>
#include "order_pair.h"

int main() {
    int x, y;
    if (!(std::cin >> x >> y)) return 1;

    order_pair(&x, &y);

    std::cout << x << ' ' << y << '\n';
    return 0;
}
