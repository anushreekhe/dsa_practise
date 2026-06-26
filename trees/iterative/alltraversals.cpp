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


void inPostPreorder(Node* root) {
    // YOUR CODE HERE
    stack<pair<Node*, int>> st;
    st.push({root, 1});
    vector<int> pre, in, post;
    if(root==NULL) return;
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        // pre , 1->2, left
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL){
                st.push({it.first->left, 1});
            }
        }
        //in, 2->3, right
        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL){
                st.push({it.first->right, 1});
            }
        }
        //post
        else{
            post.push_back(it.first->data);
        }
    }
    cout << "Preorder" << endl;
    for(int i=0;i<pre.size();i++) cout << pre[i] << " ";
    cout << endl << "Inorder" << endl;
    for(int i=0;i<in.size();i++) cout << in[i] << " ";
    cout << endl << "Postorder "<< endl;
    for(int i=0;i<post.size();i++) cout << post[i] << " ";
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

    inPostPreorder(root);
    cout << endl;

    return 0;
}