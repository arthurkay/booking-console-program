#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

void LinkedList::insert(string ownerName,
    string boatName,
    int boatLength,
    int boat) {
  struct userRecord* new_node = (struct userRecord*) malloc(sizeof(struct userRecord));
  new_node->ownerName = ownerName;
  new_node->boatName = boatName;
  new_node->boatLength = boatLength;
  new_node->boat = boat;
  new_node->next = head;
  head = new_node;

  cout << "data saved " << endl;
}

void LinkedList::display() {
  struct userRecord* ptr;
  ptr = head;
  while (ptr != NULL) {
    cout << ptr->ownerName << endl;
    ptr = ptr->next;
  }
}