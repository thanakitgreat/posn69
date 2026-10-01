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
    L row,col,in,maxN = -2e18,maxx,maxy;
    cin >> row >> col; D sum = 0;
    vector<vector<C>> nums(row,vector<C>(col));
    L numss[row][col];
    vector<L> ans;
    for(L i = 0 ; i < row ; i++){
        for(L j = 0 ; j < col ; j++){
            cin >> in; sum += in; maxN = max(maxN,in); numss[i][j] = in;
            if(i == 0 || i == row-1 || j == 0 || j == col-1) nums[i][j] = '0';
            else{
                if(in > 0) nums[i][j] = 'p';
                else if(in < 0) nums[i][j] = 'n';
                else nums[i][j] = 'z';
            }
            ans.push_back(in);
        }
    }
    sort(ans.begin(),ans.end());
    D med = (ans[(row*col-1)/2]+ans[(row*col)/2])/2.00;
    cout << fixed << setprecision(2);
    cout << "Average Power: " << sum/row/col/1.0 << "\n";
    cout << "Median Power : " << med << "\n";
    cout << "Values > avg : ";
    for(L i : ans) if(i >= sum/row/col/1.0) cout << i << " ";
    cout << "\n" << "\n" << "Type Map:" << "\n";
    for(L i = 0; i < row ; i++){
        for(L j = 0 ; j < col ; j++){
            if(nums[i][j] != '0' && numss[i][j] == maxN) cout << 'h' << " ";
            else cout << nums[i][j] << " ";
        }
        cout << "\n";
    }

}