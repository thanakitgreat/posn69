 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main( ) 
{
    int a;
    cin >> a;
    if ( a > 0 ){
        cout << "Positive";
    }else if(a < 0){
        cout << "negative";
    }else{
        cout << "Zero";
    }
    return 0;
 }