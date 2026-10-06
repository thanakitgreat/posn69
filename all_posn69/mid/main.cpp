#include <iostream>
#include "parcels.h"

int pack_parcels(int* first, int count) {
    int sum = 0;
    for(int i = 0 ; i < count ; i++){
        if(*(first+i) != 0){
            sum++;
        }
    }
    for(int j = 0 ; j < count*count ; j++){
        for(int i = 0 ; i < count-1 ; i++){
            if(*(first+i) == 0){
                *(first+i) = *(first+i+1);
                *(first+i+1) = 0;
            }
        }}
    (void)first;
    (void)count;
    return sum;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n) || n < 1 || n > 200000) {
        return 1;
    }

    int a[200000];
    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> a[i]) || a[i] < 0 || a[i] > 1000000000) {
            return 1;
        }
    }

    int left, right;
    if (!(std::cin >> left >> right) || left < 0 || left > right || right >= n) {
        return 1;
    }

    int packed_count = pack_parcels(a + left, right - left + 1);
    std::cout << packed_count << '\n';
    for (int i = 0; i < n; ++i) {
        if (i != 0) {
            std::cout << ' ';
        }
        std::cout << a[i];
    }
    std::cout << '\n';
    return 0;
}
