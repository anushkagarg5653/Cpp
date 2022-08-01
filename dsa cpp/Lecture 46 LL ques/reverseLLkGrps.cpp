class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    {   //base case
        if(head == NULL){
            return NULL;
        }
        node* curr = head;
        node* prev = NULL;
        node* next = NULL;
        
        int count = 0;
        
        //step 1 iterative call
        while(curr != NULL && count< k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        // recursion call step 2
        if( next != NULL){
            head -> next = reverse(next, k);
        }
        // step 3 return head
        return prev;
    }
};