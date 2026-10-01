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
    
    L num,in,sum = 0,count = 0; cin >> num;
    vector<L> power = {90,45,78,52,99,60,31,85,70,55};
    cout << "--- START L1 ---" << "\n";
    cout << num << "\n" << "N = " << num*num << "\n" << "--- START L2 ---" << "\n";
    for(L i = 0 ; i < num*num ; i++){
        cin >> in; cout << in << "\n"; sum += in;
    }
    cout << "Sum = " << sum << "\n" << "--- START L3 ---" << "\n";
    cin >> in; cout << in << "\n";
    for(L i : power) if(i >= in) count++;
    cout << count << " warriors selected.";
}