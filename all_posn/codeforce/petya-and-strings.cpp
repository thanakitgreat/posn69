#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin >> a >> b;
    int c = a.length();
    int d = b.length();
    vector<char> e;
    vector<char> f;
    if (c < 1 || c > 100 || d < 1 || d > 100 || c != d){
        return 0;
    }
    for (int i = 0 ; i < c ; i++){
        e.push_back(tolower(a[i]));
        f.push_back(tolower(b[i]));
    }
    for (int i = 0 ; i < c ; i++){
        if(e[i] > f[i]){
            cout << 1;
            return 0;
        }else if(e[i] < f[i]){
            cout << -1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}