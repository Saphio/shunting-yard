#include "Node.h"
#include <cstddef>

using namespace std;

// constructors/destructors
Node::Node () {
  left = NULL;
  right = NULL;
  value = '0';
}

Node::Node (char c) {
  value = c;
}

Node::~Node () {
  delete left;
  delete right;
  left = NULL;
  right = NULL;
}

// setters
void Node::setLeft (Node* l) { left = l; }
void Node::setRight (Node* r) { right = r; }
void Node::setValue (char v) { value = v; }

// getters
Node* Node::getLeft () { return left; }
Node* Node::getRight () { return right; }
char Node::getValue () { return value; }
