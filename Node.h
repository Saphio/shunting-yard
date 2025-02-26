#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
 public:
  // constructors
  Node (); 
  Node (char c);
  ~Node (); 
  // getters and setters
  void setLeft (Node* l);
  void setRight (Node* r);
  void setValue (char v);
  Node* getLeft ();
  Node* getRight ();
  char getValue ();
 private:
  Node* left;
  Node* right;
  char value;
};

#endif
