#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,r,c,max=INT_MIN;
    cin >> n >> m >> r >> c;
    int store[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        cin >> store[i][j];
    }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int sum = 0;
            for (int o = 0; o < r; o++){
                for (int s = 0; s < c; s++){
                        if (o+i >= n || j+s >= m){
                            continue;
                        }
                        sum += store[i+o][j+s];


                }
            }
            if (sum > max){
                max = sum;
            }
        }
    }

    cout << max;

    return 0;
}
