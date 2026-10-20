/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    ListNode* cur;
    int size;
public:
    Solution(ListNode* head) {
        cur=head;
        ListNode* getsize=cur;
        int n=0;
        while(getsize){
            getsize=getsize->next;
            n++;
        }size=n;
    }
    
    int getRandom() {
        ListNode* h=cur;
        int count=0;
        int dest=rand()%size;
        while(count<dest){
            h=h->next;
            count++;
        }return h->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */