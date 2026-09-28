 #include <iostream>
 #include <iomanip>
 #include <math.h>
 using namespace std;
 int main( ) 
{
    int a;
    int b = 1;
    int c = 1;
    cin >> a ;
    while (c <= a){
    b *= c;
    c++;
    }
    cout << b;
    return 0;
 }