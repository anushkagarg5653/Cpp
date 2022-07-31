////////  Method 1/////////


class Solution {
public:
    int getLength(ListNode* head){
       
        int len = 0;
        while(head != NULL){
            head = head->next;
            len++;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int len = getLength(head);
        
        ListNode* temp = head;
        int cnt =0;
        int mid = len/2;
        while(cnt < mid){
            temp = temp->next;
            cnt++;
        }
        return temp;
    }
};

////////       method 2      ////////////

class Solution {
public:
    ListNode* getMiddle(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        ListNode* fast = head -> next;
        ListNode* slow = head;
        
        while(fast != NULL){
            fast = fast -> next;
            if(fast != NULL)
                fast = fast -> next;
            slow = slow -> next;
        }
        return slow;
        
    }
    ListNode* middleNode(ListNode* head) {
        
        return getMiddle(head);
        
    }
};