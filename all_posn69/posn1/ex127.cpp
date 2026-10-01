#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

void outa(L a) {for(L i = 0 ; i < a ; i++) cout << '*';}
void outb(L a) {for(L i = 0 ; i < a ; i++) cout << " ";}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num; cin >> num;
    for(L i = 1 ; i <= num ; i += 2){
        outb((num-i)/2);outa(i);outb(num-i+1);outa(i); cout << "\n";
    }
    for(L i = 2*num+1 ; i >= 1 ; i -= 2){
        outb(num-((i-1)/2));outa(i);cout << "\n";
    }
}