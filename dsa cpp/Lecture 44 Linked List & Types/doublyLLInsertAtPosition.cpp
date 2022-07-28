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

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);

    tail -> next = temp;
    temp -> prev = tail ;
    tail = temp;
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);

    temp -> next = head;
    head -> prev = temp;
    head = temp; 
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){

    
    Node* temp = head;
    int count = 1;

    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    while(count < position - 1){
        
        temp = temp->next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, data);
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
    Node* newNode = new Node(10);
    Node* head = newNode;
    Node* tail = newNode;
    print(head);
    insertAtTail(tail, 30);
    insertAtHead(head, 20);
    print(head);
    insertAtPosition(head, tail, 2, 101);
    print(head);
    return 0;
}