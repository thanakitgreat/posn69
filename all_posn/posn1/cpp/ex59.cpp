#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,d;
    cin >> a;
    int e = 0;
    int f = 0;
    int g,h;
    vector<int> b;
    vector<int> i;
    for (int c = 0; c < a;c++){
        cin >> d;
        b.push_back(d);
    }
    for (int c = 0; c < b.size();c++){
        if (b[c]%2 == 0){
            e++;
        }
    }
    for (int c = 0; c < b.size();c++){
        if (b[c]%2 == 1 || b[c]%2 == -1){
            f++;
        }
    }
    for (int c = 0; c < b.size();c++){
        if (c == 0){
            g = b[0];
        }else{
            if (b[c] > g){
                g = b[c];
            }
        }
    }
    for (int c = 0; c < b.size();c++){
        if (c == 0){
            h = b[c];
        }else{
            if (b[c] < h){
                h = b[c];
            }
        }
    }
    for (int c = 0; c < a;c++){
        if (b[c] > 0){
            i.push_back(b[c]);
        }
    }
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
    if (i.size() > 0){
        for (int c = 0; c < i.size();c++){
        cout << i[c] << " ";
        }
    }else{
        cout << "NO POSITIVE";
    }
}