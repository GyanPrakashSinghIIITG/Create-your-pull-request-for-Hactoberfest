// C++ program for reversal of first k elements 
// of given linked list 
#include <bits/stdc++.h> 
using namespace std; 
  
/* Link list node */
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
/* Function to reverse first k elements of linked list */
static void reverseKNodes(struct Node** head_ref, int k) 
{ 
    // traverse the linked list until break 
    // point not meet 
    struct Node* temp = *head_ref; 
    int count = 1; 
    while (count < k) { 
        temp = temp->next; 
        count++; 
    } 
  
    // backup the joint point 
    struct Node* joint_point = temp->next; 
    temp->next = NULL; // break the list 
  
    // reverse the list till break point 
    struct Node* prev = NULL; 
    struct Node* current = *head_ref; 
    struct Node* next; 
    while (current != NULL) { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
  
    // join both parts of the linked list 
    // traverse the list until NULL is not 
    // found 
    *head_ref = prev; 
    current = *head_ref; 
    while (current->next != NULL) 
        current = current->next; 
  
    // joint both part of the list 
    current->next = joint_point; 
} 
  
/* Function to push a node */
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = 
          (struct Node*)malloc(sizeof(struct Node)); 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
  
/* Function to print linked list */
void printList(struct Node* head) 
{ 
    struct Node* temp = head; 
    while (temp != NULL) { 
        printf("%d ", temp->data); 
        temp = temp->next; 
    } 
} 
  
/* Driver program to test above function*/
int main() 
{ 
    // Create a linked list 1->2->3->4->5 
    struct Node* head = NULL; 
    push(&head, 5); 
    push(&head, 4); 
    push(&head, 3); 
    push(&head, 2); 
    push(&head, 1); 
  
    // k should be less than the 
    // numbers of nodes 
    int k = 3; 
  
    cout << "\nGiven list\n"; 
    printList(head); 
  
    reverseKNodes(&head, k); 
  
    cout << "\nModified list\n"; 
    printList(head); 
  
    return 0; 
} 
