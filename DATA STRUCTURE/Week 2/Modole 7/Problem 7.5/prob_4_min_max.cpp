#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }

};

void max_min(Node* head) {
    int mn = INT_MAX;
    int mx = INT_MIN;

    Node* tmp = head;

    while (tmp != NULL) {
        if (tmp->val < mn) {
            mn = tmp->val;
        }
        if (tmp->val > mx) {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }

    cout << mn << " " << mx << endl;
}

void insert_tail(Node*& head, Node*& tail, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        insert_tail(head, tail, val);
    }
    max_min(head);

    return 0;
}