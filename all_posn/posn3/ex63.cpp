#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a ;
    vector<int> b;
    int x = 0;
    int y = 0;
    int z = 0;
    int e;
    for (int c = 0; c < a*3;c++){
       cin >> e;
       b.push_back(e); 
    }
    for (int c = 0; c < 3*a;c++){
        if (c%3 == 0){
            x += b[c];
        }else if(c%3 == 1){
            y += b.at(c);
        }else if(c%3 == 2){
            z += b[c];
        }
    }
    cout << "Peanut: " << x << endl;
    cout << "Pete: " << y << endl;
    cout << "Chertam: " << z << endl;
    if (x > y && x > z){
        cout << "Winner: Peanut Score: " << x;
    }else if(y > x && y > z){
        cout << "Winner: Pete Score: " << y;
    }else if(z > y && z > x){
        cout << "Winner: Chertam Score: " << z;
    }else if(x == y && x > z){
        cout << "Winner: Peanut & Pete Score: " << x;
    }else if(z == y && y > x){
        cout << "Winner: Pete & Chertam Score: " << y;
    }else if(x == z && x > y){
        cout << "Winner: Peanut & Chertam Score: " << z;
    }else if(x == y && y == z){
        cout << "Winner: Peanut & Pete & Chertam Score: " << x;
    }
}