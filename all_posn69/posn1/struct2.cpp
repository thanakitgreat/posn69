#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

struct Node {
    L data;
    Node* next;
};

L sum_list(Node* head){
    L sums = 0;
    while(head != nullptr){
        sums += head->data;
        head = head->next;
    }
    return sums;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    L num,in; cin >> num;
    Node *head = nullptr;
    Node *last = nullptr;
    for(L i=0 ; i<num ; i++){
        cin >> in;
        Node *val = new Node{in,nullptr};
        if(head == nullptr){
            head = val;
            last = val;
        }else{
            last->next = val;
            last = val;
        }
    }
    cout << sum_list(head);
}