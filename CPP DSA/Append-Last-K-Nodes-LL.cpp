#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;


    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL) {head=n;return;}
    node* temp = head; 
    while(temp->next!=NULL) temp = temp->next;
    temp->next = n;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl; 
}
/*---------------------------------------------------APPEDNING--------------------------------------------------*/
node* append(node* &head,int k){
    if(k==0) return head;
    node* ptr1 = head;
    node* ptr2 = head;
    int count=0;
    while(count<k){
        count++;
        ptr1 = ptr1->next;
    }
    if(ptr1==NULL) return head;

    while(ptr1->next!=NULL){
        ptr2 = ptr2->next;
        ptr1 = ptr1->next;
    }

    node* temp = head;
    head = ptr2->next;
    ptr2->next=NULL;
    ptr1->next = temp;
    return head; 

}
int main(){
    node* head = NULL;
    for(int i=1;i<=6;i++) insertAtTail(head,i);
    display(head);
    node* newhead = append(head,3);
    display(newhead);
    return 0;
}