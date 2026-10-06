#include "target.h"

void give_bonus(int* pa, int* pb, int target, int bonus) {
    int *p;
    if(target == 1){p = pa; *p += bonus;}
    else if(target == 2){p = pb; *p += bonus;}
}
