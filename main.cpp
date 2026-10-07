#include <iostream>
#include "node.h"
using namespace std;

int main(){
  Node firstItemInList(5, nullptr);
  int array[1] = {5};

  Node* third = new Node;
  third->value = 2;
  third->next = nullptr;      // nothing comes after this node

  Node* second = new Node;
  second->value = 9;
  second->next = third;

  Node* first = new Node;
  first->value = 5;
  first->next = second;

  Node* head = first;

  cout << head->value << '\n';
  cout << head->next->value << '\n';
  cout << head->next->next->value << '\n';

  delete first;
  delete second;
  delete third;

  return 0
}
