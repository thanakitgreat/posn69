#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    getline(cin,a);

    if (a.length() == 2){
        char b = a[0];
        char c = a[1];
        if (isdigit(b) == true){
            cout << b;
        }else{
            if (b == 'A'){
                cout << "ace";
            }else if (b == 'J'){
                cout << "jack";
            }else if (b == 'Q'){
                cout << "queen";
            }else if (b == 'K'){
                cout << "king";
            }
        }
        cout << " of ";
        if (c == 'D'){
            cout << "diamonds";
        }else if (c == 'H'){
            cout << "hearts";
        }else if (c == 'S'){
            cout << "spades";
        }else if (c == 'C'){
            cout << "clubs";
        }
    }else{
        cout << "10 of ";
        char c = a[2];
        if (c == 'D'){
            cout << "diamonds";
        }else if (c == 'H'){
            cout << "hearts";
        }else if (c == 'S'){
            cout << "spades";
        }else if (c == 'C'){
            cout << "clubs";
        }
    } 
}