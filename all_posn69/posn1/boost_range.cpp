#include "boost_range.h"

void boost_range(int* first, int count, int delta) {
    for(int i = 0; i < count ; i++) *(first+i) += delta;
}
