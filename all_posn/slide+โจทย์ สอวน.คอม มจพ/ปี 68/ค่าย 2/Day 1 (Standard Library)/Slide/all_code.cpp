#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
//COPY
vector <int> v;
v.push_back(11); v.push_back(2); v.push_back(50); v.push_back(8);
for(int i=0 ; i < v.size() ; i++) { cout<<v[i]<<" "; } cout<<endl;
vector <int> v2;
copy(v.begin(), v.end(), back_inserter(v2) );
for(int i=0 ; i < v.size() ; i++) { cout<<v2[i]<<" "; } cout<<endl;

//Sort
sort( v.begin(), v.end() );
for(int i=0 ; i < v.size() ; i++) { cout<<v[i]<<" "; } cout<<endl;

//Find
vector<int>::iterator it = find(v.begin(),v.end(),11);
cout<< it-v.begin() <<endl;
it = find(v.begin(),v.end(),100);
cout<< it-v.begin() <<endl;

//count
v.push_back(8);
v.push_back(8);
for(int i=0 ; i < v.size() ; i++) { cout<<v[i]<<" "; } cout<<endl;
cout << count(v.begin(),v.end(),8) <<endl;

//min max
for(int i=0 ; i < v2.size() ; i++) { cout<<v2[i]<<" "; } cout<<endl;
it = min_element(v2.begin(),v2.end()); cout<<it-v2.begin()<<endl;
it = max_element(v2.begin(),v2.end()); cout<<it-v2.begin()<<endl;

//reverse
sort( v2.begin(), v2.end() ); reverse(v2.begin(),v2.end());
for(int i=0 ; i < v2.size() ; i++) { cout<<v2[i]<<" "; } cout<<endl;

//heap
vector <int> v3;
v3.push_back(11); v3.push_back(2); v3.push_back(50); v3.push_back(8); v3.push_back(4); v3.push_back(17); v3.push_back(9);
make_heap(v3.begin(),v3.end());  cout<<v3[0]<<" : "; v3.erase( v3.begin() ); for(int i=0 ; i < v3.size() ; i++) { cout<<v3[i]<<" "; } cout<<endl;
make_heap(v3.begin(),v3.end());  cout<<v3[0]<<" : "; v3.erase( v3.begin() ); for(int i=0 ; i < v3.size() ; i++) { cout<<v3[i]<<" "; } cout<<endl;
vector <int> v4;
v4.push_back(12); v4.push_back(2); v4.push_back(11); v4.push_back(8); v4.push_back(4); v4.push_back(17); v4.push_back(9);
sort_heap(v4.begin(),v4.end()); for(int i=0 ; i < v4.size() ; i++) { cout<<v4[i]<<" "; } cout<<endl;

//merge
vector <int> v5;
v5.push_back(1); v5.push_back(2); v5.push_back(3); v5.push_back(4); v5.push_back(5); v5.push_back(6); v5.push_back(7);
vector <int> v6;
v6.push_back(12); v6.push_back(2); v6.push_back(11); v6.push_back(8); v6.push_back(4); v6.push_back(17); v6.push_back(9);
vector<int> z;
merge( v5.begin(),v5.end(), v6.begin(),v6.end(), back_inserter(z) );
for(int i=0 ; i < z.size() ; i++) { cout<<z[i]<<" "; } cout<<endl;
}