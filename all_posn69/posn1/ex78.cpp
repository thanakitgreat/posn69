#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    S text; cin >> text;
    vector<L> d30 = {4,6,9,11},d31 = {1,3,5,7,8,10,12};
    L yea = stoll(text.substr(0,4)),mon = stoll(text.substr(5,2)),day = stoll(text.substr(8,2));
    auto f30 = find(d30.begin(),d30.end(),mon),f31 = find(d30.begin(),d30.end(),mon);
    if(text.length() == 10){
        if(mon > 12 || mon < 1) cout << "Invalid month.";
        else if(f30 != d30.end()){
            if(day <= 30 && day >= 1) cout << text.substr(8,2) << "/" << text.substr(5,2) << "/" << text.substr(0,4);
            else cout << "Invalid Day.";
        }else{
            if(f31 != d31.end()){
                if(day <= 31 && day >= 1) cout << text.substr(8,2) << "/" << text.substr(5,2) << "/" << text.substr(0,4);
                else cout << "Invalid Day.";
            }else{
                if(day >= 1 && day <= 28) cout << text.substr(8,2) << "/" << text.substr(5,2) << "/" << text.substr(0,4);
                else if(day == 29){
                    if(yea%4 == 0){
                        if(yea%100 == 0){
                            if(yea%400 == 0) cout << text.substr(8,2) << "/" << text.substr(5,2) << "/" << text.substr(0,4);
                            else cout << "Invalid Day.";
                        }
                        cout << text.substr(8,2) << "/" << text.substr(5,2) << "/" << text.substr(0,4);
                    }
                    else cout << "Invalid Day.";
                }
                else cout << "Invalid Day.";
            }
        }
    }else{
        cout << "Invalid date.";
    }
}