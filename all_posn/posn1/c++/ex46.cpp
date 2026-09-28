 #include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    int i, j, sum=0;
    int b[x][y];
 for(i = 0; i < x; i++)
 for(j = 0; j < y; j++)
 {
 cin>>b[i][j];
 sum = sum + b[i][j];
 }
 cout<<sum;
}