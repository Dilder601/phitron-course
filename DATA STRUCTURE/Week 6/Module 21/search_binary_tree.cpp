#include <bits/stdc++.h>
#include <queue> // Explicitly include the queue library
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if (root)
        q.push(root);
    while (!q.empty()) {
        // 1. ber kore ano
        Node* p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_order(Node* root) {
    if (root == NULL) {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        // 1. ber kore ana
        Node* f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    cout << endl; // For better output formatting
}

bool search(Node* root, int x) {
    if (root == NULL) return false;
    if (root->val == x) return true;
    if (x < root->val) {
        return search(root->left, x);
    }
    else {
        return search(root->right, x);
    }
}

int main() {
    Node* root = input_tree();
    if (search(root, 6))
        cout << "YES, Found" << endl;
    else
        cout << "NO, Not Found" << endl;
    return 0;
}


// INPUT: 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1