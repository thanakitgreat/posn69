#include <bits/stdc++.h>
using namespace std;

int b(int i){
    int k = 0;
    int j = 0;
    while (i != 0){
        if ((i%10)%2 != 0){
            k += i%10;
            i /= 10;
            j++;
        }else{
            j++;
            i /= 10;
        }
    }
    return k;
}

int a(int i , int j){
    int k;
    if ( j == 1 ){
        k = (i*2) + (b(i));
    }else if( j == 2 ){
        k = (i*3) + (b(i)*2);
    }else if( j == 3 ){
        k = (i) + (b(i)*3);
    }
    return k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int d,e,f;
    cin >> d;
    for(int c = 0 ; c < d ; c++){
        cin >> e >> f;
        cout << a(e,f) << endl;
    }
    return 0;
}