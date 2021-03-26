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

  public:
    LinkedList();
    LinkedList(Node* head);
    bool isEmpty();
    void printHead();
    void append(Node* newNode);
};

LinkedList::LinkedList(){
  this->head = NULL;
}

LinkedList::LinkedList(Node* head){
  this->head = head;
}

bool LinkedList::isEmpty(){
  if(this->head == NULL){
    return true;
  }
  return true;
}

void LinkedList::printHead(){
  if(this-isEmpty()){
    std::cout<<"There is no head in this linked list, you should append one first"<<std::endl;
  }else{
    std::cout<<this->head<<std::endl;
  }
}

void LinkedList::append(Node* newNode){
  if(this->isEmpty()){
    this->head = newNode;
  }else{
    Node *curr = this->head;

    while(curr->next != NULL){
      curr = curr->next;
    }

    curr->next = newNode;
  }
}

int main(){
  Node *newNode = new Node(10);
  LinkedList *ll = new LinkedList();
  ll->printHead();
  ll->append(newNode);
  ll->printHead();
}
