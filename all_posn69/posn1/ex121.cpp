#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

B ipc(S a){
    if(a.length() > 3) return false;
    if(a.length() > 1 && a[0] == '0') return false;
    L num = stoll(a);
    if(num >= 0 && num <= 255) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text; getline(cin,text);
    vector<S> nums;
    for(L i=1 ; i<text.length() && i<=3 ; i++){
        for(L j=i+1 ; j<text.length() && j<=i+3 ; j++){
            for(L k=j+1 ; k<text.length() && k<=j+3 ; k++){
                S n1=text.substr(0,i), n2=text.substr(i,j-i),
                n3=text.substr(j,k-j), n4=text.substr(k);
                if(ipc(n1) && ipc(n2) && ipc(n3) && ipc(n4)){
                    nums.push_back(n1+"."+n2+"."+n3+"."+n4);
                }
            }
        }
    }
    for(S i : nums) cout << i << " ";
}