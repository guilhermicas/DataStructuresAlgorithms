#include <iostream>

// Linked List mas com um pointer para o fim da lista
// Assim o tempo das operações append/insert/pop torna-se O(1)
class Node{
  public:
    int data;
    Node *next;

    Node(int data){
      this->data = data;
    }
};

class LinkedList{
  private:
    Node *head;
    Node *tail;

  public:
    int length = 0;
    LinkedList();
    LinkedList(int data);
    bool isEmpty();
    void printHead();
    void insert(int data);
    //void insertAt(int id, int data);
    void append(int data);
    void printContents();
    void printTail();
};

LinkedList::LinkedList(){
  this->head = NULL;
  this->tail = NULL;
}

LinkedList::LinkedList(int data){
  this->append(data);
}

bool LinkedList::isEmpty(){
  if(this->length == 0){
    return true;
  }
  return false;
}

void LinkedList::printHead(){
  if(this->isEmpty()){
    std::cout<<"There is no head in this linked list, you should append one first"<<std::endl;
  }else{
    std::cout<<this->head->data<<std::endl;
  }
}

void LinkedList::insert(int data){
  Node *newNode = new Node(data);
  if(this->isEmpty()){
    this->head = newNode;
    this->tail = this->head;
  }else{
    newNode->next = this->head;
    this->head = newNode;
  }
  this->length += 1;
}

//void insertAt(int pos, Node* newNode){
  //if(this->isEmpty()){
    //std::cout << "The list is empty, your position isn't valid, not inserting" << std::endl;
  //}
//}

void LinkedList::append(int data){
  Node *newNode = new Node(data);
  if(this->isEmpty()){
    this->head = newNode;
    this->tail = this->head;
  }else{
    this->tail->next = newNode;
    this->tail = this->tail->next;
  }
  this->length += 1;
}

void LinkedList::printContents(){
  if(this->isEmpty()){
    std::cout<<"List is empty"<<std::endl;
  }else{
    Node *curr = this->head;

    while(curr != NULL){
      std::cout << curr->data << std::endl;
      curr = curr->next;
    }
  }
}

void LinkedList::printTail(){
  std::cout << this->tail->data << std::endl;
}

int main(){
  std::cout << "A criar uma lista" << std::endl;
  LinkedList *ll = new LinkedList();

  for(int i = 0; i < 50; i+=10){
    std::cout << "Inserindo o valor " << i << " no fim lista" << std::endl;
    ll->append(i);
  }

  std::cout << "Os conteudos da lista são:" << std::endl;
  ll->printContents();

  std::cout << "Inserindo o valor 72 no inicio da lista" << std::endl;
  ll->insert(72);

  std::cout << "Os conteudos da lista agora são:" << std::endl;
  ll->printContents();

  std::cout << "O primeiro elemento da lista é:" << std::endl;
  ll->printHead();

  std::cout << "O ultimo elemento da lista é:" << std::endl;
  ll->printTail();
}
