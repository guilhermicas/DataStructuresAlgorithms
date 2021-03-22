#include <iostream>

class Node{
  public:
    int val;
    Node *next;

    Node(int val){
      this->val = val;
    }
};

class LinkedList{
  private:
    Node *head;
};

int main(){
  Node *newNode = new Node(10);
  LinkedList *ll = new LinkedList(newNode);
  ll->printHead();
}
