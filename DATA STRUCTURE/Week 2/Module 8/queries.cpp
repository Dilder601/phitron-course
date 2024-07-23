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

void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


void insert_head(Node*& head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}


void insert_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
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

void delete_head(Node*& head, int pos) {

    if (head == NULL)
        return;

    if (pos == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* tmp = head;

    for (int i = 1; tmp != NULL && i <= pos - 1; i++) {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL)
        return;
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;

}

int main() {
    int q;
    cin >> q;

    Node* head = NULL;
    Node* tail = NULL;

    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_head(head, v);
        }
        else if (x == 1) {
            insert_tail(head, v);
        }
        else if (x == 2) {
            delete_head(head, v);
        }
        print_linked_list(head);
    }
    return 0;
}