Node *removeDuplicates(Node *head)
{
 if(head == NULL)
    return NULL;
    
    Node* curr = head;
    
    while(curr -> next != NULL){
        
        if(curr -> data == curr -> next -> data){
            delete curr -> next;
            curr -> next = curr -> next -> next ;
        }
        else
            curr = curr -> next;
    }
    return head;
}