#include <iostream>

using namespace std;

struct Node {
    int a;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int a) {
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  new_node->a = a;
  new_node->next = head;
  head = new_node;
}

void display() {
  struct Node* ptr;
  ptr = head;
  while(ptr != NULL) {
    cout << ptr->a << endl;
    ptr = ptr->next;
  }
}

int main() {
  insert(3);
  insert(9);
  insert(1);
  insert(5);
  insert(8);
  display();
  return 0;
}
