class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr)return head;
        
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;     //建完一個dummy在head前並連上，但之後回傳不是從dummy開始 而是保持return head
        ListNode* cur=dummy;
        while(cur->next != nullptr){
            if(cur->next->val == val){
                cur->next=cur->next->next;
            }else cur=cur->next;
        }
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};