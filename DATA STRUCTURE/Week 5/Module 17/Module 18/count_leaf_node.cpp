#include<bits/stdc++.h>
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
    /// 10 20 50 30 40 70 60 -1 -1 -1 -1 -1 80 -1 -1 -1 -1
    int val;
    cin >> val;
    Node* root;
    if (val == -1) root = NULL; // if root null
    else root = new Node(val); // if root not null
    queue<Node*> q;
    if (root) q.push(root);
    while (!q.empty()) {
        //1.ber kore ano
        Node* p = q.front();
        q.pop();

        //2.jabotiyo ja kaj ache

        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;

        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;


        //3. children gulo ke push karo

        if (p->left)   q.push(p->left);
        if (p->right)  q.push(p->right);

    }
    return root;
}

// print on level order

void level_order(Node* root) {
    if (root == NULL) {
        cout << "Tree Nai" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        //1. ber kore ana
        Node* f = q.front(); // f =front
        q.pop();

        // 2. jabotio ja kaj ase
        cout << f->val << " ";

        //3. tar children gula ke rakha
        if (f->left)   q.push(f->left);
        if (f->right)  q.push(f->right);

    }
}

int count_leaf(Node* root) {
    if (root == NULL) return 0;

    // Check if the node is a leaf node
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    else {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}


int main() {
    Node* root = input_tree();
    cout << count_leaf(root) << endl;
    return 0;
}
