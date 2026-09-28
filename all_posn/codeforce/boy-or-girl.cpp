#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;
    int b = a.length();
    if (b > 100){
        return 0;
    }
    vector<char> c;
    for (int i = 0 ; i < b ; i++){
        if (i == 0){
            c.push_back(a[i]);
        }else{
            int d = 0;
            for (int j = 0 ; j < c.size() ; j++){
                if (a[i] == c[j]){
                    d++;
                }
            }
            if (d == 0){
                c.push_back(a[i]);
            }
        }
    }
    if (c.size()%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    return 0;
}