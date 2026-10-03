#include <iostream>
#include <vector>
using namespace std;
#define Vtyp vector<vector<int>>
const int M_con = 1e9+7;

void get_val(Vtyp &vec ,size_t &N ,size_t &M){
    for(size_t i = 1;i <= N;i++){
        for(size_t j = 0;j <= i && j <= M;j++){
            if(j == 0)vec[i][j] = 1;
            else{
                vec[i][j] = (vec[i-1][j-1]+vec[i-1][j])%M_con;
            }
            //cout << vec[i][j] << " ";
        }
        //cout << endl;
    }
}

int main()
{
    size_t N,M;
    cin >> N >> M;
    Vtyp pascal(N+M+1,vector<int>(M+2,0));
    pascal[0][0] = 1;
    size_t pos_i = N+M-1 ,pos_j = M-1;
    get_val(pascal,pos_i,pos_j);
    cout << pascal[pos_i][pos_j] % M_con;
    return 0;
}