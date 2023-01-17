#include<bits/stdc++.h>
using namespace std;

 struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 
 int mx=0, node=0;
    void solve(Node* root){
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL) return ;
        solve(root->left);
        solve(root->right);
        
        if(root->left && root->right){
            int gd = __gcd(root->left->data, root->right->data);
            if(gd>mx){
                mx=gd;
                node= root->data;
            }
            if(gd==mx && node<root->data) node=root->data;
            return ;
        }
    }
    
    int maxGCD( Node* root)
    {
        //code here
        if(root==NULL) return 0;
        solve(root);
        return node;
    }