 #include<bits/stdc++.h>
 using namespace std;
 
 struct Node
{
    int data;
    Node* left, * right;
}; 
 
 int sum(Node* root){
      if(root==NULL) return 0;
      
      int ans = root->data;
      root->data = sum(root->left) + sum(root->right);
      return root->data+ans;
  }
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        sum(node);
    }