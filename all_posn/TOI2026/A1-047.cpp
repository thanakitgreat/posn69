#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L kab,time;
    cin >> kab >> time;
    L sum = kab*time;
    L hour = sum/60;
    L mins = sum%60;
    if (sum > 0){
        if (hour > 0){
            if(hour == 1){
                cout << hour << " hour ";
            }else{
                cout << hour << " hours ";
            }
        }
        if (mins > 0) cout << mins << " minutes";
    }else{
        cout << "No teaching";
    }
}   