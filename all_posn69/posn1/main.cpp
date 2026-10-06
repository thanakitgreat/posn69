#include <iostream>
#include "score.h"

void add_bonus(int* p, int bonus);


int main() {
    int score, bonus;
    if (!(std::cin >> score >> bonus)) return 1;
    add_bonus(&score, bonus);
    std::cout << score << '\n';
    return 0;
}
