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

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data" <<value<<endl;
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

void deleteNode(int position, Node* &head){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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

    deleteNode(3,head);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}