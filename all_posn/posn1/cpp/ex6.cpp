 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main( ) 
{
    int a;
    cin >> a;
    if (80<=a && a <= 100 ){
        cout << "A";
    }else if (70<=a && a <= 79 ){
        cout << "B";
    }else if (60<=a && a <= 69 ){
        cout << "C";
    }else if (50<=a && a <= 59 ){
        cout << "D";
    }else if (a<50){
        cout << "F";
    }
    return 0;
 }