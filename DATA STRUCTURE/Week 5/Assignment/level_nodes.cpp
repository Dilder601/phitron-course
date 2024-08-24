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

vector<int> getLevelOrder(Node* root, int lvl) {
    queue<pair<Node*, int>> q;
    vector<int> res;
    q.push({ root, 0 });

    while (!q.empty()) {
        auto it = q.front();
        q.pop();

        Node* node = it.first;
        int level = it.second;

        if (level == lvl) {
            res.push_back(node->val);
        }

        if (node->left) {
            q.push({ node->left, level + 1 });
        }
        if (node->right) {
            q.push({ node->right, level + 1 });
        }
    }

    return res;
}

Node* inputTreeLevelOrder() {
    int n;
    cin >> n;
    Node* root = new Node(n)
        ;
    queue<Node*> q;

    q.push(root);

    while (!q.empty()) {
        auto* it = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            Node* ln = new Node(l);
            it->left = ln;
            if (it->left) {
                q.push(it->left);
            }
        }
        if (r != -1) {
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
    Node* root = inputTreeLevelOrder();
    int level;
    cin >> level;
    vector<int> nodes = getLevelOrder(root, level);
    if (nodes.size() == 0) {
        cout << "Invalid";
    }
    else {
        for (int val : nodes) {
            cout << val << " ";
        }
    }

    return 0;
}