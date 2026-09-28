#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int h1,h2,m1,m2;
    vector<int> change = {0,4,1,1,2,1,1,3,0,1};
    int sum = 0;
    cin >> h1 >> m1 >> h2 >> m2;
    
    if (h1 == h2){ //hour equal
        if (m1/10 == m2/10){ //ten minute equal
            for (int i = m1%10 ; i < m2%10 ; i++){
                sum += change[i];
            }
        }else{ //ten minute not equal
            if (m1%10 < m2%10){ // unit m1 < m2
                for (int i = m1%10 ; i < m2%10 ; i++){
                    sum += change[i];
                }
                for (int i = m1/10 ; i < m2/10 ; i++){
                    sum += change[i];
                    sum += 14;
                }
            }else{ // unit m1 > m2
                for (int i = m1%10 ; i < 10 ; i++){
                    sum += change[i];
                }
                for (int i = 0 ; i < m2%10 ; i++){
                    sum += change[i];
                }
                for (int i = m1/10 ; i < m2/10 ; i++){
                    sum += change[i];
                    sum += 14;
                }
                sum -= 14;
            }
        }
    }else if(h1/10 == h2/10){
        if (m1%10 < m2%10){
            for (int i = m1%10 ; i < m2%10 ; i++){
                sum += change[i];
            }
            for (int i = m1/10 ; i < m2/10 ; i++){
                sum += change[i];
                sum += 14;
            }
            for (int i = h1%10 ; i < h2%10 ; i++){
                sum += change[i];
                sum += 94;
            }
        }else{
            for (int i = m1%10 ; i < 10 ; i++){
                sum += change[i];
            }
            for (int i = 0 ; i < m2%10 ; i++){
                sum += change[i];
            }
            for (int i = m1/10 ; i < m2/10 ; i++){
                sum += change[i];
                sum += 14;
            }
            sum -= 14;
            for (int i = h1%10 ; i < h2%10 ; i++){
                sum += change[i];
                sum += 94;
            }
        }
    }
    cout << sum;
}