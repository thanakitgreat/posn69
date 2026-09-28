#include <bits/stdc++.h>
using namespace std;

typedef long long L;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L input;
    vector<L> num_list;

    for(L i = 0 ; i < 10 ; i++){
        cin >> input;
        if (i == 0){
            num_list.push_back(input);
        }else{
            bool same = false;
            for(L j = 0 ; j < num_list.size() ; j++){
                if (num_list[j] == input){
                    same = true;
                    break;
                }
            }
            if(!same) num_list.push_back(input);
        }

    }
    for (L i = 0 ; i < num_list.size() ; i++){
        cout << num_list[i] << " ";
    }
    return 0;
}