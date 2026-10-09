// อย่าลืมลบ HEADER ก่อนส่ง
#include <iostream>
#include <string>
using namespace std;

// ส่งเฉพาะ FUNCTION
int editDistance(const char a[], int n,
                 const char b[], int m) {
    int count = 0,last = 0;
    if(n == m){
        for(int i=0 ; i<n ; i++){
            if(a[i] != b[i]) count++;
        }
    }else{
        char la[n],lb[m];
        for(int i=0 ; i<n ; i++) la[i] = a[i];
        for(int i=0 ; i<m ; i++) lb[i] = b[i];
        if(n < m){
            for(int i=0 ; i<n ; i++){
                for(int j=last ; j<m ; j++){
                    if(la[i] == lb[j]){
                        count += j-last;
                        last = j+1;
                        break;
                    }
                }
            }
            if(last != m) count += (m-last);
        }else{
            for(int i=0 ; i<n ; i++){
                bool stat = false;
                for(int j=last ; j<m ; j++){
                    if(la[j] == lb[i]){
                        count += i-last;
                        last = i+1;
                        break;
                    }
                }
            }
        }
    }
    return count;
}

// อย่าลืมลบ MAIN ก่อนส่ง
int main() {
    string a, b;
    if (!(cin >> a >> b)) return 1;

    cout << editDistance(a.c_str(), (int)a.size(),
                         b.c_str(), (int)b.size()) << '\n';

    return 0;
}
