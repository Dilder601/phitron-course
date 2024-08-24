#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left, * right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// input : 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1) root = NULL;
    else root = new Node(val);

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

        if (p->left) q.push(p->left);

        if (p->right) q.push(p->right);
    }
    return root;
}

int sum_without_leaf(Node* root) {

    if (root == NULL) return 0;

    if (root->left != NULL || root->right != NULL) {
        return root->val + sum_without_leaf(root->left) + sum_without_leaf(root->right);
    }
    return 0;
}

int main() {
    Node* root = input_tree();
    cout << sum_without_leaf(root) << endl;
    return 0;
}

