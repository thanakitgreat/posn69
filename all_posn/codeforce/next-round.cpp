#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,d,e = 0;
    vector<int> c;
    cin >> a >> b;
    if (b > a || a > 50 || b > 50 || a < 1 || b < 1){
        return 0;
    }
    for (int i = 0 ; i < a ; i++){
        cin >> d;
        c.push_back(d);
    }
    for (int i = 0 ; i < a ; i++){
        if ((c.at(i) >= c.at(b-1)) && (c.at(i) > 0)){
            e++;
        }else if((c.at(i) < c.at(b-1)) || (c.at(i) <= 0)){
            break;
        }
    }
    cout << e;
    return 0;
}