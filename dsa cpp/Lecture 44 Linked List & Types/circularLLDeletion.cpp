#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non empty list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr -> next;
        }
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;
    //empty
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    else{
        //non empty
        //assuming value is present in ll
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != value){

            prev = curr;
            curr = curr->next;
        }
        prev -> next = curr->next;
        //1 node linked list
        if(curr == prev){
            tail = NULL;
        }
        //>=2 Node Linked list
        if( tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
    
}

int main(){
    Node* tail = NULL;

    //empty list me insert
    insertNode(tail, 2, 5);
    insertNode(tail, 5, 2);
    insertNode(tail, 2, 15);
    print(tail);
    deleteNode(tail,5);
    print(tail);
    deleteNode(tail,15);
    print(tail);
    deleteNode(tail,2);
    print(tail);
    return 0;
}