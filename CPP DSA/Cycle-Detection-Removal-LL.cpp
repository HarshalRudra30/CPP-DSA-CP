#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next= NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){head=n;return;}
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
/*--------------------------------------------------CREATING-CYCLE--------------------------------------------------*/


void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startnode;
    int ct=1;
    while(temp->next != NULL){
        if(ct==pos) startnode = temp;
        temp = temp->next;
        ct++;
    }
    temp->next = startnode;
}

/*--------------------------------------------------DETECTING-CYCLE--------------------------------------------------*/

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}
/*--------------------------------------------------REMOVING-CYCLE--------------------------------------------------*/
void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);

    fast = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}


int main(){
    node* head = NULL;
    for(int i=1;i<=6;i++) insertAtTail(head,i);
    display(head);
    makeCycle(head,3);
    if(detectCycle(head)) cout<<"Cycle Detected"<<endl;
    else cout<<"No Cycle present"<<endl;
    removeCycle(head);
    cout<<"Cycle removed"<<endl;
    display(head);
    return 0;
}