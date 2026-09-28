#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int **c = new int*[a];
    for(int d=0;d<a;d++) c[d] = new int[b];
    
    for(int d=0;d<a;d++){
        for(int e=0;e<b;e++){
            cin >> c[d][e];
        }
    }
    int f;
    cin >> f;
    for(int g=0;g<f;g++){
        int h,i,j,k;
        cin >> h >> i >> j >> k;
        int s=0;
        for(int d=h-1;d<=j-1;d++){
            for(int e=i-1;e<=k-1;e++){
                s += c[d][e];
            }
        }
        cout << s << endl;
    }
}
