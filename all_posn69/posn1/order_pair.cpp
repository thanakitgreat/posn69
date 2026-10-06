#include "order_pair.h"

void order_pair(int* a, int* b) {
    if(*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
