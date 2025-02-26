#include "Queue.h"

using namespace std;

Queue::Queue () {
  head = NULL;
}

Queue::Queue (Node* n) {
  head = n;
}

// enqueue a node
void enqueue (Node* n) {
  Node* cur = head;
  if (head == NULL) {
    head = cur;
  }
  else {
    while (cur.getRight() != NULL) {
      cur = cur.getRight();
    }
    cur.setRight(n);
  }
  return;
}

// dequeue the first node
Node* dequeue () {
  Node* cur = head;
  if (head == NULL) { // nothing in the list
    return NULL;
  }
  else { // head.getRight = NULL or has a value
    head = head.getRight();
    return cur;
  }
}
