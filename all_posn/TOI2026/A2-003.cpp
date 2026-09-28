#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

B treecheck(L left,L mid,L right){
    if(mid > left and mid > right) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    L tree,height,count = 0;
    cin >> tree;
    vector<L> heights(tree);
    for(L i = 0 ; i < tree ; i++){
        cin >> heights[i];
    }
    for(L i = 0 ; i < tree ; i++){
        if(i == 0){
            if(treecheck(0,heights[i],heights[i+1])) count++;
        }else if(i == tree-1){
            if(treecheck(heights[i-1],heights[i],0)) count++;
        }else{
            if(treecheck(heights[i-1],heights[i],heights[i+1])) count++;
        }
    }
    cout << count;
}