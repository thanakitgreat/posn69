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
    
    L row,col,x,y,maxN = 0; cin >> row >> col;
    vector<vector<L>> nums(row,vector<L>(col));
    for(L i=0 ; i<row ; i++){
        for(L j=0 ; j<col ; j++){
            cin >> nums[i][j];
        }
    }
    for(L i=0 ; i<=row-3 ; i++){
        for(L j=0 ; j<=col-3 ; j++){
            L sum=0;
            for(L k=i ; k<i+3 ; k++){
                for(L l=j ; l<j+3 ; l++){
                    sum += nums[k][l];
                }
            }
            if(sum > maxN){
                maxN = sum;
                x = i; y = j;
            }
        }
    }
    cout << maxN << '\n';
    for(L i=x ; i<x+3 ; i++){
        for(L j=y ; j<y+3 ; j++){
            cout << nums[i][j] << " " ;
        }
        cout << '\n';
    }
}