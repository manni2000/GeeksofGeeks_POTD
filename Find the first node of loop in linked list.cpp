 #include<bits/stdc++.h>
 using namespace std;
 
 struct Node {
    int data;
    struct Node* next;
     Node(int x) {
        data = x;
        next = NULL;
    }
 };
 
 int findFirstNode(Node* head)
    {
        // your code here
        if(head==NULL) return -1;
        Node* s = head;
        Node* f = head;
        
        while(f->next && f->next->next){
            s=s->next;
            f=f->next->next;
            
            if(s==f) break;
        }
        if(s!=f) return -1;
        
        s=head;
        
        while(s!=f){
           s=s->next;
           f=f->next;
        }
        return s->data;
    }