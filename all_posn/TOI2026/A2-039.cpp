#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

void printer(string a){
    cout << a << "\n";
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L num1,num2,num3,action;
    cin >> num1 >> num2 >> num3 >> action;

    vector<L> order = {num1,num2,num3};

    cout << "Input number 1 stored.\n";
    cout << "Input number 2 stored.\n";
    cout << "Input number 3 stored.";

    if(action == 1){
        cout << "\n";
        cout << "Original order: ";
            for (L i : order){
                cout << i << " ";
        }
    }else if(action == 2){
        cout << "\n";
        vector<L> copy = order;
        sort(copy.begin(),copy.end(),greater<L>());
        cout << "Descending order: ";
        for (L i : copy){
            cout << i << " ";
        }
    }else if(action == 3){
        cout << "\n";
        vector<L> copy = order;
        sort(copy.begin(),copy.end());
        cout << "Ascending order: ";
        for (L i : copy){
            cout << i << " ";
        }
    }
}