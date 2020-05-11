#ifndef INC_03_07_BUILDTREE_H
#define INC_03_07_BUILDTREE_H

#include <vector>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


class Solution07 {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        /* 分治法，时间复杂度O(N)，空间复杂度O(N) */

        if (inorder.size() == 0) return NULL;

        TreeNode *root = new TreeNode(preorder[0]);

        // 中序列表中查找根节点
        int idx;
        for(int i=0; i<inorder.size(); i++)
        {
            if(inorder[i] == preorder[0]) idx = i;
        }
        // 左子树
        vector<int> left_inorder(inorder.begin(),inorder.begin()+idx);
        vector<int> left_preorder(preorder.begin()+1, preorder.begin()+1+idx);
        // 右子树
        vector<int> right_inorder(inorder.begin()+idx+1, inorder.end());
        vector<int> right_preorder(preorder.begin()+1+idx, preorder.end());

        //分治法
        root->left = buildTree(left_preorder, left_inorder);
        root->right = buildTree(right_preorder, right_inorder);

        return root;
    }
};



#endif //INC_03_07_BUILDTREE_H
