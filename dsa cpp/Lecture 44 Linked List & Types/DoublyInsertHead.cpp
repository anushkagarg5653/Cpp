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

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);

    temp -> next = head;
    head -> prev = temp;
    head = temp; 
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
    print(head);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    print(head);
    return 0;
}