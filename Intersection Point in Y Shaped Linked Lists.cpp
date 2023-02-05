#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
    Node *next = NULL;
    Node *curr = head1;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = NULL;
        curr = next;
    }

    Node *temp = head2;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp->data;
}

int main(){
    int t, n1, n2, n3;
    cin>>t;

    while(t--){
       cin>>n1>>n2>>n3;

       Node* head1 = inputList(n1);
       Node* head2 = inputList(n2);
       Node* common = inputList(n3);

       Node* temp1 = head1;
       while(temp1!=NULL && temp1->next!=NULL){
          temp1=temp1->next;
          if(temp1!=NULL) temp1->next=common;
       }

       Node* temp2 = head2;
       while(temp2!=NULL && temp2->next!=NULL){
          temp2=temp2->next;
          if(temp2!=NULL) temp2->next=common;
       } 
       cout<<intersectPoint(head1, head2)<<endl;
    }
    return 0;
}