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
vector<array<int,3>> in;
void enterright(Node* root, int r, int c);
    void enterleft(Node* root,int r, int c){
        in.push_back({root->data,r+1,c-1});
        if(root->left!=NULL) enterleft(root->left,r+1,c-1);
        if(root->right!=NULL) enterright(root->right,r+1,c-1);
    }
    void enterright(Node* root, int r, int c){
        
        in.push_back({root->data, r+1, c+1});
        if(root->left!=NULL) enterleft(root->left,r+1,c+1);
        if(root->right!=NULL) enterright(root->right,r+1,c+1);
    }
    vector<int> verticalTraversal(Node* root) {
        vector<int> aaa;
        if(root==NULL) return aaa;
        
        in.push_back({root->data,0,0});
        if(root->left!=NULL) enterleft(root->left,0,0);
        if(root->right!=NULL) enterright(root->right,0,0);
        sort(in.begin(), in.end(), [](const array<int,3>& a, const array<int,3>& b) {
        if (a[2] != b[2]) return a[2] < b[2];   // col
        if (a[1] != b[1]) return a[1] < b[1];   // row
        return a[0] < b[0];                     // value
        });
        vector<int> ans;
        int a=in[0][2];
        
        
        for(int i=1;i<in.size();i++){
            if(in[i][2]==a) continue;
            else{
                ans.push_back(in[i-1][0]);
                a=in[i][2];
            }
            
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

    vector<int> v=verticalTraversal(root);
    for(int i=0;i<v.size();i++) cout << v[i] << " ";
    cout << endl;

    return 0;
}