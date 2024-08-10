#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};

void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
};

void insertTail(int val, Node*& head) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

int main() {
    // Node* a = new Node(1);
    // Node* b = new Node(2);
    // Node* c = new Node(3);
    Node* head = NULL:
    while (true) {
        int val;
        cin >> val;

        if (val == -1) break;
        insertTail(val, head);
    }
    // a->next = b;
    // b->next = c;

    printList(head);
    return 0;
}