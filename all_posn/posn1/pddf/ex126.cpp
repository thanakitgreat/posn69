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
    
    L size;
    cin >> size;
    vector<vector<L>> maze(size,vector<L>(size,-1));
    vector<vector<pair<L,L>>> Path(size,vector<pair<L,L>>(size,{0,0}));
    vector<pair<L,L>> intersect;
    for(L i = 0 ; i < size ; i++){
        for(L j = 0 ; j < size ; j++){
            cin >> maze[i][j];
        }
    }
    L curRow = 0,curCol = 0;
    B stat = true;
    Path[0][0] = {1,1};
    L count = 2;
    while(curRow != size-1 && curCol != size-1){
        if(maze[curRow][curCol+1] == 1){
            if(maze[curRow+1][curCol] == 1){
                intersect.push_back({curRow,curCol});
            }
            Path[curRow][curCol+1] = {1,count};
            curCol++;
            count++;
        }else{
            if(maze[curRow+1][curCol] == 1){
                Path[curRow+1][curCol] = {1,count};
                curRow++;
                count++;
            }else{
                if(intersect.empty()){
                    stat = false;
                    break;
                }else{
                    curRow = intersect[intersect.size()-1].first + 1;
                    curCol = intersect[intersect.size()-1].second;
                    count = Path[curRow][curCol].second;
                    for(L i = 0 ; i < size ; i++){
                        for(L j = 0 ; j < size ; j++){
                            if(Path[i][j].second > count){
                                Path[i][j] = {0,0};
                            }
                        }
                    }
                    intersect.pop_back();
                }
            }
        }
    }
    if(stat){
        for(L i = 0 ; i < size ; i++){
            for(L j = 0 ; j < size ; j++){
                cout <<  Path[i][j].first << " ";
            }
            cout << "\n";
        }
    }else{
        cout << "No path found";
    }
}