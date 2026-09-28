#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,c = 5,e = 0;
    vector<int> b;
    vector<int> d = {0,100,120,200,60};
    while (true){
        cin >> a;
        if (a == c){
            break;
        }else{
            b.push_back(a);
        }
    }
    for (int i = 0 ; i < b.size() ; i++){
        e += d.at(b[i]);
    }
    cout << "Bye Bye" << endl << "Total Calories: " << e;
}