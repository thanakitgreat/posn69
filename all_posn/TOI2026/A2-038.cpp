#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L round;
    L fire1,earth1,water1,fire2,earth2,water2;
    L fire_sum = 0,earth_sum = 0,water_sum = 0;
    cin >> round;

    for(L i = 0 ; i < round ; i++){
        cin >> fire1 >> earth1 >> water1 >> fire2 >> earth2 >> water2;
        fire_sum += max(fire1,fire2);
        earth_sum += max(earth1,earth2);
        water_sum += max(water1,water2);
    }
    cout << fire_sum + earth_sum + water_sum << "\n";
    cout << fire_sum << " " << earth_sum << " " << water_sum << "\n";
    if(fire_sum > earth_sum + water_sum){
        cout << "YES";
    }else{
        cout << "NO";
    }


}