class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head == NULL)
            return false;
            
        Node* slow = head;
        Node* fast = head;
        
        while(slow!= NULL && fast != NULL){
            fast = fast -> next;
            if(fast != NULL)
                fast = fast -> next;
            
            slow = slow -> next;
            
            if(slow == fast)
                return true;
        }
        return false;
    }
};