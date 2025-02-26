#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

using namespace std;

class Queue {
 public:
  // constructors
  Queue ();
  Queue (Node* n);
  // queue functions
  void enqueue (Node* n);
  Node* dequeue ();
 private:
  Node* head;
};

#endif
