#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

int main(){
    L num,sand,kin,kA,lR,rR,pR,safe=0,danger=0;
    cin >> num >> sand;
    vector<L> water(num),space(num);
    for(L &i : water) cin >> i;
    for(L &i : space) cin >> i;
    cin >> kin >> kA >> lR >> rR >> pR;
    water[kin-1] += kA;
    for(L i=lR-1 ; i<=rR-1 ; i++) water[i] += pR;
    for(L i=0 ; i<num ; i++){
        if(water[i] > space[i]){
            if(sand != 0){
                if(water[i]-space[i] <= sand){
                    sand -= (water[i]-space[i]);
                    safe++;
                }else{
                    danger++;
                    if(i != num-1) water[i+1] += (water[i]-space[i]-sand);
                    water[i] -= sand;
                    sand = 0;
                }
            }else{
                danger++;
                if(i != num-1) water[i+1] += (water[i]-space[i]);
            }
        }else if(water[i] <= space[i]) safe++;
    }
    cout << safe << "\n" << danger << '\n';
    if(safe == num) cout << "ALL SAFE";
    else cout << "CRISIS";
}