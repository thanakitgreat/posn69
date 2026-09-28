#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, command, value, possibility = 0;
    bool is_stack = true, is_queue = true, is_priqueue = true;
    stack<int> stk;
    queue<int> que;
    priority_queue<int> pri;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> command >> value;

        if (command == 1) {
            if (is_stack) stk.push(value);
            if (is_queue) que.push(value);
            if (is_priqueue) pri.push(value);
        } else {
            if (is_stack) {
                if (stk.top() != value) {
                    is_stack = false;
                } else if (!stk.empty()) {
                    stk.pop();
                }
            }
            if (is_queue) {
                if (que.front() != value) {
                    is_queue = false;
                } else if (!que.empty()) {
                    que.pop();
                }
            }
            if (is_priqueue) {
                if (pri.top() != value) {
                    is_priqueue = false;
                } else if (!pri.empty()) {
                    pri.pop();
                }
            }
        }
    }

    if (is_stack) possibility++;
    if (is_queue) possibility++;
    if (is_priqueue) possibility++;

    if (possibility > 1) {
        cout << 4;
    } else if (possibility == 0) {
        cout << 5;
    } else if (is_stack) {
        cout << 1;
    } else if (is_queue) {
        cout << 2;
    } else if (is_priqueue) {
        cout << 3;
    }
    
    return 0;
}