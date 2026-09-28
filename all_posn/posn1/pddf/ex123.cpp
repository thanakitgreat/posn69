#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L point,maxL,minL,maxD,maxA,count = 0;
    D maxAvg = 0.00;
    cin >> point >> minL >> maxL >> maxD >> maxA;
    vector<L> points(point);
    for(L i = 0 ; i < point ; i++){
        cin >> points[i];
    }
    for(L i = 0 ; i < point ; i++){
        for(L j = i+1 ; j < point ; j++){
            D len =  j - i + 1;
            if(len >= minL and len <= maxL){
                D sum = 0;
                vector<L> test;
                for(L k = i ; k <= j ; k++){
                    sum += points[k];
                    test.push_back(points[k]);
                }
                sort(test.begin(),test.end());
                if(test[len-1] - test[0] <= maxD){
                    D curAvg = sum/len;
                    if(curAvg <= maxA){
                        count++;
                        maxAvg = max(maxAvg,curAvg);
                    }
                }
            }
        }
    }
    cout << count << "\n" << fixed << setprecision(2) << maxAvg;
}