#include "Queue.h"
#include "Node.h"
#include <cstddef>

using namespace std;

Queue::Queue () {
  head = NULL;
}

Queue::Queue (Node* n) {
  head = n;
}

// enqueue a node
void Queue::enqueue (Node* n) {
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

// dequeue the first node
Node* Queue::dequeue () {
  Node* cur = head;
  if (head == NULL) { // nothing in the list
    return NULL;
  }
  else { // head.getRight = NULL or has a value
    head = head->getRight();
    return cur;
  }
}

// getter
Node* Queue::getHead () {
  return head;
}
