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
    
    L sum = 1,num,count = 0; cin >> num;
    for(L i=num ; i>=5 ; i /= 5){
        count += num/5;
    }
    cout << count;
    
}