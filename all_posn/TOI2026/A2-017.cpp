#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    C size,taste,topping;
    L sum = 0,amount;

    cin >> size >> taste >> topping;
    if (size == 'S'){
        if (taste == 'R'){
            sum += 60;
        }else if(taste == 'T'){
            sum += 80;
        }
    }else if(size == 'M'){
        if (taste == 'R'){
            sum += 80;
        }else if(taste == 'T'){
            sum += 100;
        }
    }else if(size == 'L'){
        if (taste == 'R'){
            sum += 100;
        }else if(taste == 'T'){
            sum += 120;
        }
    }
    if (topping == 'E'){
        cin >> amount;
        sum += amount*10;
    }else if(topping == 'P'){
        cin >> amount;
        sum += amount*15;
    }
    
    cout << sum;

    return 0;
}