#include <bits/stdc++.h>
using namespace std;

typedef int I;
typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
const L INF = 1e18;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    S text;
    L sum = 0,num = 0,product = 1;
    vector<L> nums;
    vector<L> freq;
    getline(cin,text);

    for(L i = 0 ; i < text.length() ; i++){
        if(isdigit(text[i])){
            L numin = text[i] - '0';
            num++;
            sum += (numin);
            product *= (numin);
            auto it = find(nums.begin(),nums.end(),numin);
            if(it != nums.end()){
                freq[distance(nums.begin(),it)]++;
            }else{
                nums.push_back(numin);
                freq.push_back(1);
            }
        }
    }
    if(nums.size() > 0){
        cout << "Sum of digits: " << sum << "\n";
        cout << "Product of digits: " << product << "\n";
        cout << "Number of unique digits: " << nums.size() << "\n";
        cout << "Frequency of each digit:" << "\n";
        for(L i = 0 ; i < nums.size() ; i++){
            cout << "Digit " << nums[i] << ": " << freq[i] << " times\n";
        }
    }else{
        cout << "No digits found in the Input.";
    }
    
}