#include <bits/stdc++.h>
using namespace std;

class Node
{
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

int countMaxHeight(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int left = countMaxHeight(root->left);
    int right = countMaxHeight(root->right);
    return max(left, right) + 1;
}

Node* inputTreeLevelOrder(int& countNode) {
    int n;
    cin >> n;
    Node* root = new Node(n);
    queue<Node*> q;

    q.push(root);
    countNode++;

    while (!q.empty()) {
        auto* it = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            countNode++;
            Node* ln = new Node(l);
            it->left = ln;
            if (it->left) {
                q.push(it->left);
            }
        }
        if (r != -1) {
            countNode++;
            Node* rn = new Node(r);
            it->right = rn;
            if (it->right) {
                q.push(it->right);
            }
        }
    }
    return root;
}

int main() {

    int countNode = 0;
    Node* root = inputTreeLevelOrder(countNode);

    int level = countMaxHeight(root);
    int res = pow(2, level) - 1;

    if (res == countNode) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}