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
        // Can be called implicitly or explicitly
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

int main(){

    // ListNode* n = new ListNode; => This calls default constructor implicitly
    // ListNode* n = new ListNode(); => This calls default constructor explicitly
    // ListNode* n = new ListNode(5); => This calls constructor with int parameter
    // ListNode* n = new ListNode(5, nullptr); => This calls constructor with int and ListNode* parameters
    // ListNode* n = new ListNode(5, new ListNode(10)); => This calls constructor with int and ListNode* parameters

    // Create a linked list with 5 nodes
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4); 
    head->next->next->next->next = new ListNode(5);

    printList(head);

    return 0;
}
