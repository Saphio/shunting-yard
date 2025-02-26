#include "Stack.h"

using namespace std;

Stack::Stack () {
  head = NULL;
}

Stack::Stack (Node* n) {
  head = n;
}

void push (Node* n) {
  Node* cur = head;
  if (head == NULL) {
    head = n;
  }
  else {
    while (cur.getRight() != NULL) {
      cur = cur.getRight();
    }
    cur.setRight(n);
  }
  return;
}

Node* pop () {
  Node* prev = head, cur = head;
  if (head == NULL) {
    return NULL;
  }
  else {
    while (cur.getRight != NULL) {
      if (cur != head) { prev = cur.getRight(); }
      cur = cur.getRight();
    }
    prev.setRight(NULL);
    return cur;
  }
}

Node* peek () {
  Node* cur = head;
  if (head == NULL) {
    return NULL;
  }
  else {
    while (cur.getRight != NULL) {
      cur = cur.getRight();
    }
    return cur;
  }
}
  
