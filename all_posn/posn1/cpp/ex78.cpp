#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

bool L(int y) {
    if (y % 400 == 0) return true;
    if (y % 100 == 0) return false;
    if (y % 4 == 0) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    int b = 0;
    getline(cin,a);
        if (a.length() == 10){
            if (stoi(a.substr(5,2)) <= 12){
                if (stoi(a.substr(5,2))%2 == 0){
                    if (stoi(a.substr(5,2)) == 2){
                        if (stoi(a.substr(8,2)) <= 28){
                            cout << a.substr(8,2) << "/" << a.substr(5,2)
                            << "/" << a.substr(0,4);
                        }else if (stoi(a.substr(8,2)) == 29){
                            if (L(stoi(a.substr(8,2)))){
                                cout << a.substr(8,2) << "/" << a.substr(5,2)
                            << "/" << a.substr(0,4);
                            }else{
                                cout << "Invalid Day.";
                            }
                        }else{
                            cout << "Invalid Day.";
                        }
                        }else{
                            if (stoi(a.substr(8,2)) <= 31){
                                cout << a.substr(8,2) << "/" << a.substr(5,2)
                                << "/" << a.substr(0,4);
                            }else{
                                cout << "Invalid Day.";
                            }
                        }
                }else{
                    if (stoi(a.substr(8,2)) <= 30){
                        cout << a.substr(8,2) << "/" << a.substr(5,2)
                        << "/" << a.substr(0,4);
                    }else{
                        cout << "Invalid Day.";
                    }
                }       
            }else{
                cout << "Invalid month.";
            }
        }else{
            cout << "Invalid date.";
        }    
        return 0;
    }
