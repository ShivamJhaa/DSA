/*This code contains all the operations related to the linked list in the form of differnet funstions*/

#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node *next;

    //constructor
    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead(node *&head, int data){
    node *n = new node(data);
    n->next = head;
    head =n;
} 

void insertAtEnd(node *&head,int data){

    if(head==NULL)
    {
        head = new node(data);
        return;
    }
    node *temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = new node(data);
    return;
    
}

int length(node *head){
    int len =0;
    while(head!=NULL){
        head=head->next;
        len++;
    }

    return len;
}

void insertInMiddle(node *&head,int data,int pos){
    if(head==NULL || pos==0){
        insertAtHead(head,data);
    }
    else if(pos>length(head)){
        insertAtEnd(head,data);
    }
    else{
        //Insert in the middle

        int jump =1;
        node *temp =head;

        while(jump<pos-1){
            temp=temp->next;
            jump++;
        }
        node *n = new node(data);
        n->next = temp->next;
        temp->next=n;
    }
}


void printList(node *head){
    cout<<"List is as follows"<<"\n";
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}

void deleteHead(node *&head){

    if(head ==NULL){
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;

    return;
}

void deleteTail(node *&head){
    node *prev = NULL;
    node *temp=head;

    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;

}

void deleteInMiddle(node *&head,int pos){
    if(head==NULL || pos==0){
        deleteHead(head);
    }
    else if(pos>length(head)){
        deleteTail(head);
    }
    else{
        int jump =1;
        node *temp = head;

        while(jump<pos-1){
            temp=temp->next;
            jump++;
        }
        node *next = temp->next->next;
        free(temp->next); // Free memory
      
        temp->next = next; 
    }
    return;
}

bool SearchIterative(node *head,int val){
    node * temp = head;
    while(temp!=NULL){
        if(temp->data == val)
        return true;
        temp = temp->next;
    }
    return false;
}

bool SearchRecursive(node *head,int val){
    if(head ==NULL)
    return false;

    if(head->data == val)
    return true;

    else {
        return SearchRecursive(head->next,val);
    }
}

void buildList(node * &head){
    int n;
    cin>>n;
    while(n!=-1){
        insertAtEnd(head,n);
        cin>>n;
    }
}

//Reversing a linked list in iterative manner

void reverseList(node *&head){
    node *prev=NULL;
    node *next;
    node *curr=head;

    while(curr!=NULL){
        next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

//Reversing a Linked link in recursive manner

node* reverseListRec(node *head){
    if(head->next==NULL || head==NULL)
    return head;

    node * smallHed = reverseListRec(head->next);
    node *curr= head;
    curr->next->next = curr;
    curr->next =NULL;

    return smallHed;
}

//Middle node of the Linked List

void 

//Operator Overloading

istream& operator>>(istream &is,node*&head){
    buildList(head);
    return is;
}

ostream& operator<<(ostream &os,node*head){
    printList(head);
    return os;
}

int main(){
    node *head1 =NULL;

        cin>>head1;
        cout<<head1;
        // reverseList(head1);
        // cout<<head1;
        head1 = reverseListRec(head1);
        cout<<head1;
  
    return 0;
}