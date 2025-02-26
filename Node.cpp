#include "Node.h"

using namespace std;

// constructors/destructors
Node::Node () {
  left = NULL;
  right = NULL;
  value = 0;
}

Node::Node (Node* l, Node* r, int v) {
  left = l;
  right = r;
  value = v;
}

Node::~Node () {
  delete &left;
  delete &right;
  left = NULL;
  right = NULL;
}

// setters
void setLeft (Node* l) { left = l; }
void setRight (Node* r) { right = r; }
void setValue (int v) { value = v; }

// getters
Node* getLeft () { return left; }
Node* getRight () { return right; }
int getValue () { return value; }
