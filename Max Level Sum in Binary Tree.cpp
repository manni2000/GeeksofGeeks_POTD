 #include<bits/stdc++.h>
 using namespace std;

 struct Node
 {
     int data;
     Node* left, *right;
}; 
 
 int maxLevelSum(Node* root) {
        queue<Node*> q;
        q.push(root);
        int maxi=INT_MIN;
        while(q.size()){
            Node* temp;
            int sum = 0;
            int count = q.size();
            for(int i=0;i<count;i++){
                temp = q.front();
                q.pop();
                sum += temp->data;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            maxi = max(maxi, sum);
        }
        return maxi;
    }