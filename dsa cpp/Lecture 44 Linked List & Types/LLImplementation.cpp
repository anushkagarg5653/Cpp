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
};

int main(){
    Node* newnode = new Node(10);
    cout<<newnode->data<<" -> "<<newnode->next;
    return 0;
}