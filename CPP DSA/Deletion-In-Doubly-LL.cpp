#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL) head->prev = NULL;
    head = n;
}
void insertAtTail(node* &head,int val){
    node* n = new node(val);
    node* temp = head;
    if(head==NULL) {
        insertAtHead(head,val);
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = n;
    n->prev=temp;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
/*--------------------------------------------------DELETION--------------------------------------------------*/
void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete; 
}
void deletion(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    int ct=1;
    
    while(temp!=NULL && ct!=pos){
        temp = temp->next;
        ct++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=NULL) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}
int main(){
    node* head =NULL;
    for(int i=1;i<=6;i++) insertAtTail(head,i);
    display(head);
    deletion(head,6);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}