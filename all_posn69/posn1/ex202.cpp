bool isPrimeCrystal(long long n) {
    long long a = n;
    bool stat = true;
    if(a == 1) stat = false;
    else if(a > 2){
        long long i = 2;
        while(i <= a/2){
            if(a % i == 0){
                stat = false;
                break;
            }
            i++;
        }
    }
    return stat;
}

int countPrimeCrystals(long long L, long long R) {
    long long count = 0;
    for(long long i = L ; i <= R ; i++) if(isPrimeCrystal(i)) count++;
    return count;
}
