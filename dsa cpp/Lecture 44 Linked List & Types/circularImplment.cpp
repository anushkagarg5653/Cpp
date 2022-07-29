#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this->next = NULL;
    } 

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for"<<value;
    }
};

void insertNode(Node* &tail, int element, int data){

    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;  
    }
    else{
        Node* curr = tail; 
        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;

    }

};

void print(Node* tail){
    Node* temp = tail;
    do{
        cout<<tail -> data<<"->";
        tail = tail->next;
    }while(tail->next != temp);

    cout<<endl;
}

int main(){
    Node* tail = NULL;

    //empty
    insertNode(tail, 5, 2);
    print(tail);
    insertNode(tail, 2, 12);
    print(tail);
    insertNode(tail, 12, 23);
    print(tail);
    insertNode(tail, 23, 9);
    print(tail);

    return 0;
}