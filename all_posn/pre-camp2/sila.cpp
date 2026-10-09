#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num; cin >> num;
    L maxN = -2e18,x,y,size;
    vector<vector<L>> nums(num,vector<L>(num));
    for(L i=0 ; i<num ; i++){
        for(L j=0 ; j<num ; j++){
            cin >> nums[i][j];
        }
    }
    for(L i=0 ; i<num ; i++){
        for(L j=0 ; j<num ; j++){
            for(L k=1 ; k<=num ; k++){
                if(i+k <= num && j+k <= num){
                    L sum = 0;
                    for(L l=i ; l<i+k ; l++){
                        for(L m=j ; m<j+k ; m++){
                            sum += nums[l][m];
                        }
                    }
                    if(sum > maxN){
                        maxN = sum;
                        x = i; y = j;
                        size = k;
                    }
                }
                else break;
            }
        }
    }
    cout << maxN << "\n" << x << " " << y << " " << size;
    
}