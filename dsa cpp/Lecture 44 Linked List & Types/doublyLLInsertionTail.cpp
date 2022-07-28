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
    insertAtTail(tail, 20);
    insertAtTail(tail, 50);
    print(head);
    return 0;
}