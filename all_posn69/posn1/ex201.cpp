#include <bits/stdc++.h>
using namespace std;

double fahrenheitToCelsius(double f) {
    return (f-32)*5/9;
}

string getPotionState(double c) {
    if(c < 0.0) return "FROZEN";
    else if(0.0 <= c && c <= 100.0) return "LIQUID";
    else return "VAPORIZED";
}