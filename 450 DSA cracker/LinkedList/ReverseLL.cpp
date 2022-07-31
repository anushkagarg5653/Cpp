///iterative way////
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


    //// recursive way///
    class Solution
{
    public:
    void reverse(struct Node* &head,struct Node *curr, struct Node *prev ){
        //base case
        if(curr == NULL){
            head = prev;
            return;
        }
        struct Node *forward = curr -> next;
        reverse(head, forward, curr);
        curr -> next = prev;
    }
    struct Node* reverseList(struct Node *head)
    {
        Node* curr = head;
        Node* prev = NULL;
        reverse(head, curr, prev);
        return head;
    }
    
};


////recursion 3////////

class Solution
{
    public:
    Node* reverse(struct Node* &head){
        //base case
        if(head == NULL || head -> next == NULL){
            return head;
        }
        Node* smlHead = reverse(head->next);
        head -> next -> next = head;
        head -> next = NULL;
       return smlHead;
    }
    struct Node* reverseList(struct Node *head)
    {
        reverse(head);
        
    }
    
};
    