#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};
//printing length of LL
int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* newNode = new Node(10);
    Node* head = newNode;
    print(head);
    cout<<getLength(head)<<endl;
    return 0;
}