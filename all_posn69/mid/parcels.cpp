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

