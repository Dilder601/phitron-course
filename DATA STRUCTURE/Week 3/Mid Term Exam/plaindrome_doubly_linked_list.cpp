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


bool isPalindrome(Node* head) {
    if (head == NULL)
        return true;


    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    while (head != tail && head->prev != tail) {
        if (head->val != tail->val) {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }

    return true;
}

int main() {
    int val;
    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        cin >> val;
        if (val == -1) break;

        Node* newNode = new Node(val);
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

    if (isPalindrome(head)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
