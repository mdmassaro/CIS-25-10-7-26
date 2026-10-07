#include <iostream>
#include "node.h"
using namespace std;

void printReadings(const Node* head) {
    for (const Node* current = head; current != nullptr; current = current->next) {
        std::cout << current->value << " -> ";
    }
    std::cout << "nullptr\n";
}

int totalReadings(const Node* head) {
    int total = 0;
    for (const Node* current = head; current != nullptr; current = current->next) {
        total += current->value;
    }
    return total;
}

int main(){
  Node firstItemInList(5, nullptr);
  int array[1] = {5};

  Node* fourth = new Node;
  fourth->value = 8;
  fourth->next = nullptr;
//create list {8}
  Node* third = new Node;
  third->value = 2;
  third->next = fourth;      // nothing comes after this node
//create list of {2, 8}
  Node* second = new Node;
  second->value = 9;
  second->next = third;
// create list of {9, 2, 8}
  Node* first = new Node;
  first->value = 5;
  first->next = second;
// create list of {5, 9, 2, 8}

  //declare first as head
  Node* head = first;
// may declare Node* tail = third as opposite of head

  // look at each value in linked list manually
//  cout << head->value << '\n';
//  cout << head->next->value << '\n';
//  cout << head->next->next->value << '\n';

  // use function to run through list values
  printReadings(head);
  cout << "Total value of linked list is: " << totalReadings(head) << endl;
  
  // after making head point to all of linked list we delete the dynamic memory for creating nodes
  delete first;
  delete second;
  delete third;
  delete fourth;
  first = nullptr;
  second = nullptr;
  third = nullptr;
  fourth = nullptr;
  head = nullptr;

  return 0
}
