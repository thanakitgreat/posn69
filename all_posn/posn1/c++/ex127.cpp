#include <bits/stdc++.h>
using namespace std;

void b(int c){
    for (int  i = 0 ; i < c ; i++){
        cout << "*";
    }
}
void c(int d){
    for (int  i = 0 ; i < d ; i++){
        cout << " ";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for (int i = 1 ; i <= a ; i += 2){
        c((a-i)/2);
        b(i);
        c(a-i+1);
        b(i);
        cout << endl;
    }
    for (int i = 2*a+1 ; i >= 1; i -= 2){
        c(a-((i-1)/2));
        b(i);
        cout << endl;
    }

}