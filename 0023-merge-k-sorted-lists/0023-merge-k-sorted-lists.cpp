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
    ListNode* rev(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* cur=head;
        while(cur){
            ListNode* nx=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nx;
        }return prev;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size())return nullptr;
        priority_queue<int>q;
        for(int i{0};i<lists.size();++i){
            if(lists[i]==nullptr)continue;
            ListNode* cur=lists[i];
            while(cur){
                q.push(cur->val);
                cur=cur->next;
            }
        }if(q.empty())return nullptr;
        ListNode* head=new ListNode(q.top());
        ListNode* cur=head;
        q.pop();
        while(!q.empty()){
            ListNode* n=new ListNode(q.top());
            cur->next=n;
            cur=cur->next;
            q.pop();
        }return rev(head);
    }
};