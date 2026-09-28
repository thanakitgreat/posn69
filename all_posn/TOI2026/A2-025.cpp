#include <bits/stdc++.h>
using namespace std;

typedef int L;
typedef string S;
typedef char C;
typedef double D;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L row,column,xspawn,yspawn,infect,stat,xinfect,yinfect,safe = 0;
    cin >> row >> column;
    cin >> xspawn >> yspawn;
    cin >> infect;
    vector<vector<L>> area(row+4, vector<L>(column+4,0));
    for(L i = 0 ; i < infect ; i++){
        cin >> xinfect >> yinfect;
        L x = xinfect + 2;
        L y = yinfect + 2;
        for(L j = 1 ; j <= 25 ; j++){
            if(j < 2){
                area[x][y] = 100;
            }else if(j < 10){
                for(L k = -1 ; k <= 1 ; k++){
                    for(L l = -1 ; l <= 1 ; l++){
                        if(k != 0 or y != 0){
                            area[x+k][y+l] = max(60,area[x+k][y+l]);
                        }
                    }
                }
            }else{
                for(L k = -2 ; k <= 2 ; k++){
                    for(L l = -2 ; l <= 2 ; l++){
                        if(k != 0 or y != 0){
                            area[x+k][y+l] = max(20,area[x+k][y+l]);
                        }
                    }
                }
            }
        }
    }
    for(L i = 2 ; i <= row + 2 ; i++){
        for(L j = 2 ; j <= column + 2 ; j++){
            if(area[i][j] == 0) safe++;
        }
    }
    cout << safe << "\n";
    cout << area[xspawn + 2][yspawn + 2] << "%\n";
}