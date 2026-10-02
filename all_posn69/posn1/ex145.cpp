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
    S ans,run,in; L num; cin >> ans >> num;
    for(L i=1 ; i<=num ; i++){
        cin >> run;
        if(ans.length() == run.length()){
            if(ans == run) cout << "P" << i << ":S" << "\n";
            else{
                for(L j=0 ; j<ans.length() ; j++){
                    if(ans[j] != run[j]){
                        cout << "P" << i << ":E(at" << j+1 << ")" << "\n";
                        break;
                    }
                }
            }
        }else{
            if(ans.substr(0,run.length()) == run) cout << "P" << i << ":F" <<"\n";
            else{
                for(L j=0 ; j<run.length() ; j++){
                    if(ans[j] != run[j]){
                        cout << "P" << i << ":E(at" << j+1 << ")" << "\n";
                        break;
                    }
                }
            }
        }
    } 
}