/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxLevelSum(struct TreeNode* root) {
    if (root == NULL) return 0;

    struct TreeNode* queue[10000];
    int front = 0, rear = 0;

    queue[rear++] =  root;
    int level = 1;
    int bestS = 0;
    int maxSum = INT_MIN;

    while (front < rear) {
        int lsize = rear-front;
        int lsum = 0;
        
        
        for (int i=0;i<lsize;i++){
            struct TreeNode* curr = queue[front++];

            lsum += curr->val;

            if (curr->left) {
                queue[rear++] = curr->left;
            }

            if (curr->right) {
                queue[rear++] = curr->right;
            }
        }
        
        if (lsum > maxSum) {
            bestS = level;
            maxSum = lsum;
        }


        level++;
    }

    return bestS;
}