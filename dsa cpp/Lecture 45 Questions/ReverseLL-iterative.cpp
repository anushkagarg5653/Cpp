void Reverse(Node* head){
if(head == NULL || head->next == NULL)
        	return head;
    LinkedListNode* prev = NULL;
    LinkedListNode* curr = head;
    LinkedListNode* forward = NULL;
    
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
     
    }
    return prev;
}
