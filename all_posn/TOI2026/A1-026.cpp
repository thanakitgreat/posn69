#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int b,d = 0,e = 0;
    vector<int> a = {0};
    for (int i = 1 ; i < 4 ; i++){
        cin >> b;
        a.push_back(b);
    }
    for (int i = 1 ; i < 4 ; i++){
        if (a.at(i)%2 == 0){
            d++;
        }else{
            e++;
        }
    }
    cout << "even " << d << endl << "odd " << e;
}