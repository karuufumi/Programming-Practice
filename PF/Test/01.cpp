#include <iostream>


using namespace std;


struct Node{
    int data;
    Node* next;
};
struct LList{
    Node* head;
};


void greatestOfThree(const LList& list, int& first, int& second, int& third) {
    // Edge case: List has fewer than 3 elements
    if (list.head == nullptr || list.head->head == nullptr || list.head->next->next == nullptr) {
        first = -1;
        second = -1;
        third = -1;
        return;
    }

    // Initialize our sliding window pointers
    Node* p1 = list.head;
    Node* p2 = p1->next;
    Node* p3 = p2->next;

    int max_sum = p1->data + p2->data + p3->data;
    first = p1->data;
    second = p2->data;
    third = p3->data;

    // Advance the window to start checking the rest of the list
    p1 = p2;
    p2 = p3;
    p3 = p3->next;

    while (p3 != nullptr) {
        int current_sum = p1->data + p2->data + p3->data;
        
        // Use >= to ensure we capture the LAST occurring triplet in case of a tie
        if (current_sum >= max_sum) {
            max_sum = current_sum;
            first = p1->data;
            second = p2->data;
            third = p3->data;
        }
        
        // Slide the window forward
        p1 = p2;
        p2 = p3;
        p3 = p3->next;
    }
}
int checkSublistHelper(Node* list1, Node* list2){
    

}

int isSublist(const LList& list1, const LList& list2) {
    // 1. Check if list2 is a sublist of list1
    int len1 = checkSublistHelper(list1.head, list2.head);
    if (len1 != -1) {
        return len1;
    }

    // 2. Check if list1 is a sublist of list2
    int len2 = checkSublistHelper(list2.head, list1.head);
    return len2; 
    
    // If neither is a sublist, len2 will be -1, which is the correct return value.
}