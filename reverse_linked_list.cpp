/*
 * LeetCode #206 - Reverse Linked List
 * Difficulty: Easy
 *
 * Given the head of a singly linked list, reverse the list,
 * and return the reversed list.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1) - Iterative approach
 */

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    // Iterative approach
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};

// Helper: Build list from vector
ListNode* buildList(vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (int i = 1; i < vals.size(); i++) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

// Helper: Print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;

    vector<int> v1 = {1, 2, 3, 4, 5};
    ListNode* head1 = buildList(v1);
    cout << "Test 1: ";
    printList(sol.reverseList(head1)); // 5 -> 4 -> 3 -> 2 -> 1

    vector<int> v2 = {1, 2};
    ListNode* head2 = buildList(v2);
    cout << "Test 2: ";
    printList(sol.reverseList(head2)); // 2 -> 1

    return 0;
}
