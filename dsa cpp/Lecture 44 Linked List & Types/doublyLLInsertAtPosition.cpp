#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void insertAtTail(Node* &tail, Node* &head , int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> prev = tail ;
    tail = temp;
    }
}

void insertAtHead(Node* &tail,Node* &head, int data){
    // if not staring from node if both head and tail null then this check 
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp; 
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){

    
    Node* temp = head;
    int count = 1;

    if(position == 1){
        insertAtHead(tail,head, data);
        return;
    }

    while(count < position - 1){
        
        temp = temp->next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail,head, data);
        return;
    }
    Node* newNode = new Node(data);

    newNode -> next = temp -> next;
    temp -> next -> prev = newNode;
    temp -> next = newNode;
    newNode -> prev = temp;
}

void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){

        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int main(){
    // Node* newNode = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    insertAtTail(tail,head, 30);
    insertAtHead(tail,head, 20);
    print(head);
    insertAtPosition(head, tail, 2, 101);
    print(head);
    return 0;
}