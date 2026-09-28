#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b[a][a], c[a][a];
    for(int d=0;d<a;d++){
        for(int e=0;e<a;e++){
            cin >> b[d][e];
        }
    }
    int f;
    cin >> f;
    if(f==90){
        for(int d=0;d<a;d++){
            for(int e=0;e<a;e++){
                c[e][a-1-d]=b[d][e];
            }
        }
    }
    else if(f==180){
        for(int d=0;d<a;d++){
            for(int e=0;e<a;e++){
                c[a-1-d][a-1-e]=b[d][e];
            }
        }
    }
    else if(f==270){
        for(int d=0;d<a;d++){
            for(int e=0;e<a;e++){
                c[a-1-e][d]=b[d][e];
            }
        }
    }
    for(int d=0;d<a;d++){
        for(int e=0;e<a;e++){
            cout << c[d][e] << " ";
        }
        cout << endl;
    }
}
