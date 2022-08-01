bool isCircular(Node *head)
{
    if(head == NULL)
        return NULL;
    
    Node* temp = head -> next;

    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head)
        return true;
    return false;
}