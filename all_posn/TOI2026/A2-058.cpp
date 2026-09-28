#include <bits/stdc++.h>
using namespace std;

int main(){
    int start,end,divide,remain,count = 0;
    cin >> start >> end >> divide >> remain;
    for(int i = start ; i <= end ; i++){
        if(i % divide == remain) count++;
    }
    cout << count;
}