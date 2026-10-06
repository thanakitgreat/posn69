#include <iostream>
#include "target.h"

int main() {
    int a, b, target, bonus;
    if (!(std::cin >> a >> b >> target >> bonus)) return 1;

    give_bonus(&a, &b, target, bonus);

    std::cout << a << ' ' << b << '\n';
    return 0;
}
