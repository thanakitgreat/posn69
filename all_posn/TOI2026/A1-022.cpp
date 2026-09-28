#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int d,m;
    cin >> d >> m;
    if ((m == 1 and d <= 19) or (m == 12 and d >= 22)){
        cout << "capricorn";}
    else if ((m == 1 and d >= 20) or (m == 2 and d <= 18)){
        cout << "aquarius";}
    else if ((m == 2 and d >= 19) or (m == 3 and d <= 20)){
        cout << "pisces";}
    else if ((m == 3 and d >= 21) or (m == 4 and d <= 19)){
        cout << "aries";}
    else if ((m == 4 and d >= 20) or (m == 5 and d <= 20)){
        cout << "taurus";}
    else if ((m == 5 and d >= 21) or (m == 6 and d <= 21)){
        cout << "gemini";}
    else if ((m == 6 and d >= 22) or (m == 7 and d <= 22)){
        cout << "cancer";}
    else if ((m == 7 and d >= 23) or (m == 8 and d <= 22)){
        cout << "leo";}
    else if ((m == 8 and d >= 23) or (m == 9 and d <= 22)){
        cout << "virgo";}
    else if ((m == 9 and d >= 23) or (m == 10 and d <= 23)){
        cout << "libra";}
    else if ((m == 10 and d >= 24) or (m == 11 and d <= 21)){
        cout << "scorpio";}
    else{
        cout << "sagittarius";}
}