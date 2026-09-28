#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef long long ll;

void solve_B() {
    int t;
    if (!(cin >> t)) return;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<ll> b(m);
        for (int i = 0; i < m; ++i) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll total_profit = 0;
        
        priority_queue<ll> available_costs; 
        
        int item_idx = 0; 
        for (int cust_idx = 0; cust_idx < m; ++cust_idx) {
            ll current_budget = b[cust_idx];
            
            while (item_idx < n && a[item_idx] <= current_budget) {
                available_costs.push(-a[item_idx]);
                item_idx++;
            }

            if (!available_costs.empty()) {
                ll cheapest_cost = -available_costs.top();
                available_costs.pop();
                
                total_profit += (current_budget - cheapest_cost);
            }
        }
        
        cout << total_profit << "\n";
    }
}

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        solve_B();
        return 0;
    }