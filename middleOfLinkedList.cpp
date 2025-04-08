#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    // Data contained in the node
    int val;

    // Pointer to the next node in the list
    ListNode *next;

    // Constructors for ListNode
    
     // Default constructor initializes val to 0 and next to nullptr
    ListNode() : val(0), next(nullptr) {}
     // Constructor that initializes val to x and next to nullptr
    ListNode(int x) : val(x), next(nullptr) {}
     // Constructor that initializes val to x and next to the given node
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        std::cout << temp->val << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            ListNode* slow = head;
            ListNode* fast = head;

            // Move fast pointer twice as fast as slow pointer to traverse through the Linked List

            while(fast != NULL && fast->next != NULL) {
                fast = fast->next->next;
                slow = slow->next;

                continue;
            }

            return slow;
        }
    };

int main(){

    // Create the Linked List first 
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4); 
    head->next->next->next->next = new ListNode(5);

    // Print out the newly created Linked List
    printList(head);

    
    // Create an object of Solution and find the middle node
    Solution sol;
    ListNode* middle = sol.middleNode(head);
    cout << "Middle Node Value: " << middle->val << endl;

    return 0;
}
