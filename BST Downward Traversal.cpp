#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left = NULL;
    Node* right = NULL;

    Node(int val){
        int data = val;
    }
};

long long int verticallyDownBST(Node *root,int target){
        // Code here
        queue<Node*>q;
        q.push(root);
        long long ans = 0;
        Node* tar = NULL;
        
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            
           if(node->data==target){
               tar=node;
               break;
           }
           if(node->left) q.push(node->left);
           
           if(node->right) q.push(node->right);
        }
        
        if(tar==NULL) return -1;
        queue<pair<Node*,int>> qt;
        
        if(tar->left){
            qt.push({tar->left,-1});
        }
        if(tar->right){
            qt.push({tar->right,+1});
        }
        
        while(!qt.empty()){
            auto it = qt.front();
            qt.pop();
            
            Node* node1 = it.first;
            int num = it.second;
            
            if(num==0) ans+=node1->data;
            
            if(node1->left) qt.push({node1->left, num-1});
            
            if(node1->right) qt.push({node1->right, num+1});
        }
        return ans;
    }