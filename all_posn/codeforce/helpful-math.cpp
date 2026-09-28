#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;
    int b = a.length();
    int d = 0;
    vector<int> c;
    if (b > 100){
        return 0;
    }
    for (int i = 0 ; i < b ; i += 2){
        c.push_back((a[i]-'0'));
    }
    sort(c.begin(),c.end());
    for (int i = 0 ; i < c.size() ; i++){
        d += c[i];
        if (i != c.size()-1){
            cout << c[i] << "+";
        }else{
            cout << c[i];
        }
    }
    return 0;
}