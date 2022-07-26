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

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}


void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}
void insertAtTail(Node* & tail, int data){

    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp; 

}


void insertAtPosition(Node* & tail, Node* &head, int data, int position){
   
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;

    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    //insert At last position

    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    //new node insert
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;  
}

int main(){
    Node* newnode = new Node(10);
    //head
    Node* head = newnode;
    Node* tail = newnode;
    print(head);

    insertAtTail(tail, 30);
    print(head);

    insertAtHead(head, 20);
    print(head);

    insertAtPosition(tail, head, 40, 2);
    print(head);

    cout<<"head " << head->data<<endl;
    cout<<"tail " << tail->data<<endl;
    return 0;
}