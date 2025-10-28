/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
/*
        Brute Force (Recursive DFS — very intuitive)
        TC=O(N), SC=O(H)height of tree
        if(root==NULL)return 0;
        int leftDepth=maxDepth(root->left);
        int rightDepth=maxDepth(root->right);
        return 1+max(leftDepth,rightDepth);
*/

if(!root)return 0;
queue<TreeNode*>q;
q.push(root);
int depth=0;
while(!q.empty()){//As long as there are nodes left to process in the queue,
int size=q.size();//tells how many nodes are at current level
depth++;
for(int i=0;i<size;i++){
    TreeNode* node=q.front();q.pop();
    if(node->left)q.push(node->left);
    if(node->right)q.push(node->right);

}

}
return depth;

    }
};