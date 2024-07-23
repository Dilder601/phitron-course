#include <bits/stdc++.h>
using namespace std;

class Node
{
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

class MyQueue
{
public:
    Node* head;
    Node* tail;
    int size;

    MyQueue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push(int x) {
        size++;
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int front() {
        return head->val;
    }

    void pop() {
        if (head) {
            size--;
            Node* temp = head;
            head = head->next;
            delete temp;
            if (head == NULL) {
                tail = NULL;
            }
        }
    }

    bool empty() {
        return size == 0;
    }
};

class MyStack
{
public:
    Node* head;
    Node* tail;
    int size;

    MyStack() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push(int x) {
        size++;
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop() {
        if (!empty()) {
            size--;
            Node* temp = tail;
            tail = tail->prev;
            if (tail) {
                tail->next = NULL;
            }
            else {
                head = NULL;
            }
            delete temp;
        }
    }

    int top() {
        if (!empty()) {
            return tail->val;
        }
        return -1;
    }

    bool empty() {
        return size == 0;
    }
};

int main() {
    MyStack stk;
    MyQueue que;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        stk.push(x);
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        que.push(x);
    }

    int flag = 1;
    if (stk.size == que.size) {
        while (!stk.empty()) {
            if (stk.top() != que.front()) {
                flag = 0;
            }
            stk.pop();
            que.pop();
        }
    }
    else {
        flag = 0;
    }
    if (flag == 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
