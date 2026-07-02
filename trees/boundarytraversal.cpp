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


vector<int> boundary(Node* root) {
    vector<int> ans1, ans2;
        if(root==NULL) return ans1;
        queue<Node*> q;
        q.push(root);
        vector<int> last;
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                Node* node=q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->data);
            }
            ans1.push_back(level[0]);
            ans2.push_back(level[level.size()-1]);
            last=level;
        }
        vector<int> ans;
        for(int i=0;i<ans1.size()-1;i++){
            ans.push_back(ans1[i]);
        }
         for(int i=0;i<last.size();i++){
            ans.push_back(last[i]);
        }
        for(int i=ans2.size()-2;i>0;i--){
            ans.push_back(ans2[i]);
        }
       return ans;
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

    cout << "Boundary traversal: ";
    vector<int> ans=boundary(root);
    for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
}