#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void take_input(Node*& head, int v) {
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

int linked_list_size(Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }

    return count;
}

int main() {
    Node* head = NULL;
    int val;

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        take_input(head, val);
    }

    int size = linked_list_size(head);

    cout << size << endl;

    return 0;
}