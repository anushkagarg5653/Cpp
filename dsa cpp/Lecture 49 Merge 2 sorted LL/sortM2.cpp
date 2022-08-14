class Solution
{
    public:
    void* insertAtTail(Node* &tail, Node* curr){
        
        tail -> next = curr;
        tail = curr;
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node* zerohead = new Node(-1);
        Node* zerotail = zerohead;
        Node* onehead = new Node(-1);
        Node* onetail = onehead;
        Node* secondhead = new Node(-1);
        Node* secondtail = secondhead;
        
        Node* curr = head;
        
        // creating separate LL
        while(curr != NULL){
            int value = curr -> data;
            
            if(value == 0)
                insertAtTail(zerotail, curr);
            else if(value == 1)
                insertAtTail(onetail, curr);
            else if(value == 2)
                insertAtTail(secondtail, curr);
                
            curr = curr -> next;
        }
        
        if(onehead->next != NULL)
            zerotail -> next = onehead -> next;
        else 
            zerotail -> next = secondhead -> next;
            
        onetail -> next = secondhead -> next;
        secondtail -> next = NULL;
        
        //head setup
        head = zerohead -> next;
        
        //delete dummy
        delete zerohead;
        delete onehead;
        delete secondhead;
        
        return head;
        
    }
};