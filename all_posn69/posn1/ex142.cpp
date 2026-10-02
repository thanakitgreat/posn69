#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num,id; cin >> num;
    S stat; deque<L> nums;
    for(L i=0 ; i<num ; i++){
        cin >> stat;
        if(stat == "ENQUEUE"){cin >> id;nums.push_back(id);}
        else if(stat == "DEQUEUE") nums.pop_front();
        else if(stat == "PROMOTE"){
            cin >> id; nums.erase(find(nums.begin(),nums.end(),id));
            nums.push_front(id);
        }
        else if(stat == "DEMOTE"){
            cin >> id; nums.erase(find(nums.begin(),nums.end(),id));
            nums.push_back(id);
        }
        else if(stat == "SHOW"){
            for(L i : nums) cout << i << " ";
            cout << "\n";
        }
    }
}