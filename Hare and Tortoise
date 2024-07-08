#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (!head || !head->next) return nullptr;

        ListNode* tortoise = head;
        ListNode* hare = head;

        // Phase 1: Detect if there is a cycle
        do {
            if (!hare || !hare->next) return nullptr;
            tortoise = tortoise->next;
            hare = hare->next->next;
        } while (tortoise != hare);

        // Phase 2: Find the start of the cycle
        tortoise = head;
        while (tortoise != hare) {
            tortoise = tortoise->next;
            hare = hare->next;
        }

        return tortoise;
    }
};

int main() {
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // Creating a cycle

    Solution solution;
    ListNode* cycleStart = solution.detectCycle(head);
    if (cycleStart) {
        std::cout << "Cycle detected at node with value: " << cycleStart->val << std::endl;
    } else {
        std::cout << "No cycle detected." << std::endl;
    }

    // Clean up memory to avoid leaks
    head->next->next->next->next = nullptr; // Break the cycle
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
