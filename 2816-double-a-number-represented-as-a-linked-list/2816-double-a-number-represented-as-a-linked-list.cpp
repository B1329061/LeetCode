class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* cur=head;
        ListNode* prev=nullptr;
        while(cur){
            ListNode* nx=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nx;
        }//prev<-head';
        cur=prev;
        ListNode* cnt=prev;
        int c=0;
        while(prev){
            int sum=2*prev->val+c;
            prev->val=sum%10;
            c =sum/10;
            prev=prev->next;
            if(prev)cnt=cnt->next;
        }if(c){
            ListNode* carry=new ListNode(1);
            cnt->next=carry;
        }

        while(cur){
            ListNode* nx=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nx;
        }
        
        return prev;
    
    }
};