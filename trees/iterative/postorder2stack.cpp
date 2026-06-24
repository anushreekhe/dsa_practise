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
vector<int> postorder(Node* root) {
    // YOUR CODE HERE
    vector<int> postord;
    Node* node=root;
    if(node==NULL) return postord;
    stack<Node*> st1, st2;
    st1.push(node);
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=NULL) st1.push(root->left);
        if(root->right!=NULL) st1.push(root->right);
    }
    while(!st2.empty()){
        postord.push_back(st2.top()->data);
        st2.pop();
    }
    return postord;
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

    cout << "Postorder traversal: ";
    vector<int> ans=postorder(root);
    for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
}