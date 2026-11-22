class MyLinkedList {
private:
    ListNode* dummy;
    ListNode* tail;
    int size;

public:
    MyLinkedList() {
        dummy = new ListNode(0);
        tail = dummy;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        ListNode* curr = dummy->next;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        tail->next = node;
        tail = node;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == size) {
            addAtTail(val);
            return;
        }
        ListNode* prev = dummy;
        for (int i = 0; i < index; i++) {
            prev = prev->next;
        }
        ListNode* node = new ListNode(val);
        node->next = prev->next;
        prev->next = node;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        ListNode* prev = dummy;
        for (int i = 0; i < index; i++) {
            prev = prev->next;
        }
        ListNode* target = prev->next;
        prev->next = target->next;
        if (target == tail) {
            tail = prev;
        }
        delete target;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */