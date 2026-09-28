#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef string S;
typedef char C;
typedef bool B;
typedef double D;

B a_t_check(C a,C b){
    if ((a == 'A' and b == 'T') or (a == 'T' and b == 'A')){
        return true;
    }else{
        return false;
    }
}

B c_g_check(C a,C b){
    if ((a == 'C' and b == 'G') or (a == 'G' and b == 'C')){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L length,change,type,pos1,wrong = 0;
    C dna,new1;

    cin >> length;

    vector<C> dna1;
    vector<C> dna2;
    for(L i = 0 ; i < length ; i++){
        cin >> dna;
        dna1.push_back(dna);
    }
    for(L i = 0 ; i < length ; i++){
        cin >> dna;
        dna2.push_back(dna);
    }

    cin >> change;
    for(L i = 0 ; i < change ; i++){
        cin >> type >> pos1 >> new1;
        if(type == 1){
            dna1.erase(dna1.begin() + pos1);
            dna1.insert(dna1.begin() + pos1, new1);
        }else if(type == 2){
            dna2.erase(dna2.begin() + pos1);
            dna2.insert(dna2.begin() + pos1, new1);
        }
    }
    for(L i = 0 ; i < length ; i++){
        if (!(a_t_check(dna1[i],dna2[i]) or c_g_check(dna1[i],dna2[i]))){
            wrong++;
        }
    }
    for(L i = 0 ; i < length ; i++){
        cout << dna1[i] << " ";
    }
    cout << "\n";
    for(L i = 0 ; i < length ; i++){
        cout << dna2[i] << " ";
    }
    cout << "\n" << wrong;
}