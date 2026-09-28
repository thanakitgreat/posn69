#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m, input;
    vector<int> arr1, fallback;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr1.push_back(input);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> input;
        if (find(arr1.begin(), arr1.end(), input) != arr1.end()) {
            arr1.erase(find(arr1.begin(), arr1.end(), input));
            continue;
        }
        fallback.push_back(input);
    }
    
    cout << arr1.size() + fallback.size();
    
    return 0;
}