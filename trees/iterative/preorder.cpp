#include <bits/stdc++.h>
using namespace std;

// ─── Node Structure ───────────────────────────────────────────
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// ─── Build Tree from Level Order Input ────────────────────────
// Input format: space-separated values, use -1 for NULL
// Example: 1 2 3 4 -1 -1 5
Node* buildTree(vector<int>& vals) {
    if (vals.empty() || vals[0] == -1) return nullptr;

    Node* root = new Node(vals[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1;

    while (!q.empty() && i < vals.size()) {
        Node* curr = q.front(); q.pop();

        // Left child
        if (i < vals.size() && vals[i] != -1) {
            curr->left = new Node(vals[i]);
            q.push(curr->left);
        }
        i++;

        // Right child
        if (i < vals.size() && vals[i] != -1) {
            curr->right = new Node(vals[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

// ─── Your Preorder Function (fill this in VS Code) ────────────
vector<int> preorder(Node* root) {
    // YOUR CODE HERE
    vector<int> preord;
    if(root == NULL) return preord;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        preord.push_back(root->data);
        if(root->right!=NULL) st.push(root->right);
        if(root->left!=NULL) st.push(root->left);
    }
    return preord;
}

// ─── Main ──────────────────────────────────────────────────────
int main() {
    cout << "Enter nodes level-order (-1 for NULL): ";
    string line;
    getline(cin, line);

    vector<int> vals;
    stringstream ss(line);
    int x;
    while (ss >> x) vals.push_back(x);

    Node* root = buildTree(vals);

    cout << "Preorder traversal: ";
    vector<int> ans=preorder(root);
    for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
}