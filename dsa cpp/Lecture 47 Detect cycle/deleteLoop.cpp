class Solution
{
    public:
    //Function to check if the linked list has a loop.
    Node* flyod(Node* head)
    {
        if(head == NULL)
            return NULL;
            
        Node* slow = head;
        Node* fast = head;
        
        while(slow!= NULL && fast != NULL){
            fast = fast -> next;
            if(fast != NULL)
                fast = fast -> next;
            
            slow = slow -> next;
            
            if(slow == fast)
                return slow;
        }
        return NULL;
    }

    Node* getNode(Node* head){

        if(head == NULL)
            return NULL;

        Node* intersection = flyod(head);
        Node* slow = head;

        while(slow != intersection){
            slow = slow -> next;
            intersection = intersection -> next;
        }
        return slow;
    }

    void removeLoop(Node* head){
        if(head == NULL)
            return;
        
        Node* startLoop = getNode(head);
        Node* temp = startLoop;

        while(temp ->next != startLoop){
            temp = temp -> next;
        }
        temp -> next = NULL;
    }
};