#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void addNode(Node*& head, Node*& tail, string address) {
    Node* newNode = new Node(address);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void visit(Node*& head, Node*& current, string add) {
    Node* tmp = head;
    while (tmp != NULL) {
        if (tmp->val == add) {
            current = tmp;
            cout << current->val << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}

void next(Node*& current) {
    if (current->next != NULL) {
        current = current->next;
        cout << current->val << endl;
    }
    else {
        cout << "Not Available" << endl;
    }
}

void prev(Node*& current) {
    if (current->prev != NULL) {
        current = current->prev;
        cout << current->val << endl;
    }
    else {
        cout << "Not Available" << endl;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node* current = NULL;

    string address;

    while (true) {
        cin >> address;
        if (address == "end") break;
        addNode(head, tail, address);
    }

    current = head;

    int q;
    cin >> q;
    string op;

    for (int i = 0; i < q; i++) {
        cin >> op;
        if (op == "visit") {
            cin >> address;
            visit(head, current, address);
        }
        else if (op == "next") {
            next(current);
        }
        else if (op == "prev") {
            prev(current);
        }
    }

    return 0;
}
