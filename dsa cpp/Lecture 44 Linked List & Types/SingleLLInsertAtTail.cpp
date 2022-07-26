#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtTail(Node* & tail, int data){

    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp; 

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* newnode = new Node(10);
    Node* head = newnode;
    Node* tail = head;
    print(tail);
    insertAtTail(tail, 20);
    print(head);
    return 0;
}