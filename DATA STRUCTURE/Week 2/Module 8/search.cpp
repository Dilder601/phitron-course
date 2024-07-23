#include <bits/stdc++.h>
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

void search(Node* head, int x) {
    int cnt_index = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        if (tmp->val == x) {
            cout << cnt_index << endl;
            return;
        }
        tmp = tmp->next;
        cnt_index++;
    }
    cout << -1 << endl;
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
    int n;
    cin >> n;
    while (n--) {
        Node* head = NULL;
        Node* tail = NULL;
        while (true) {
            int val;
            cin >> val;
            if (val == -1) break;
            insert_tail(head, tail, val);
        }
        int x;
        cin >> x;
        search(head, x);
    }
    return 0;
}
