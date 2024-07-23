#include<bits/stdc++.h>
using namespace std;

class Node {
public:
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

    Node* current;

    BrowserHistory(string homepage) {
        current = new Node(homepage);
    }

    void visit(string url) {
        Node* newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }

    string back(int steps) {
        for (int i = 0; i < steps; i++) {
            if (current->prev != NULL) {
                current = current->prev;
            }
        }
        return current->val;
    }

    string forward(int steps) {
        for (int i = 0; i < steps; i++) {
            if (current->next != NULL) {
                current = current->next;
            }
        }
        return current->val;
    }
};

int main() {

    return 0;
}