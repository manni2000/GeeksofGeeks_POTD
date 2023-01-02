#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; 
 
 vector<int> maximumValue(Node* node) {
        //code here
        queue<Node*> q;
        vector<int>ans;
        
        q.push(node);
        while(q.size()>0){
            int s = q.size();
            int m=0;
            
            while(s--){
                Node* p = q.front();
                m = max(m,p->data);
                q.pop();
                if(p->left!=NULL) q.push(p->left);
                if(p->right!=NULL) q.push(p->right);
            }
            ans.push_back(m);
        }
       return ans; 
    }