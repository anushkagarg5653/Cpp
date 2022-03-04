#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* & head, int data){
    //create new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    //create new node
    Node* temp = new Node(data);
    tail->next = temp;
    temp = tail;
}
void insertAtPosition(Node* &tail,Node* & head, int data, int position){
    //insert at start
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    Node * temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp->next;
        cnt++;
    }
    //insert at last position
    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }
    
    
    //creating a node
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp->next;
    temp->next = nodeToInsert;

}

void print(Node* &head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    //create new node
    Node* newnode = new Node(10);

    // cout<<newnode -> data<<" -> ";
    // cout<<newnode -> next<<endl;

    //head pointed to new node
    Node* head = newnode;
    // insertAtHead(head,20);
    // insertAtHead(head,30);
    // print(head);

    Node* tail = newnode;
    insertAtTail(tail, 12);
    print(head);

    insertAtPosition(tail,head,21,1);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    return 0;
}