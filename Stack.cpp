#include "Stack.h"
#include "Node.h"

using namespace std;

Stack::Stack () {
  head = NULL;
}

Stack::Stack (Node* n) {
  head = n;
}

void Stack::push (Node* n) {
  Node* cur = head;
  if (head == NULL) {
    head = n;
  }
  else {
    while (cur->getRight() != NULL) {
      cur = cur->getRight();
    }
    cur->setRight(n);
  }
  return;
}

Node* Stack::pop () {
  Node* prev = head;
  Node* cur = head;
  if (head == NULL) {
    return NULL;
  }
  else {
    while (cur->getRight != NULL) {
      if (cur != head) { prev = cur->getRight(); }
      cur = cur->getRight();
    }
    prev->setRight(NULL);
    return cur;
  }
}

Node* Stack::peek () {
  Node* cur = head;
  if (head == NULL) {
    return NULL;
  }
  else {
    while (cur->getRight != NULL) {
      cur = cur->getRight();
    }
    return cur;
  }
}
  
