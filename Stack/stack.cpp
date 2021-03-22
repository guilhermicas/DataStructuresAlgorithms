#include <iostream>

//ARRAY IMPLEMENTATION OF STACK
//MAYBE IMPROVE:
//CREATE NEW ARRAY WITH DOUBLE THE SPACE IF ARRAY IS FULL ON INSERT, CHECK IF THERE IS ENOUGH MEMORY

#define MAX 3

class Stack {
  public:
    int memory[MAX];
    int TOP;

    Stack(){
      TOP = -1;
    }

    bool isFull();
    void push(int num);
    void getContents();
    int pop();
    bool isEmpty();
    void peek();
};


void Stack::peek(){
  if(this->isEmpty()){
    std::cout << "Stack empty" << std::endl;
    return;
  }
  std::cout << this->memory[this->TOP] << std::endl;
}
bool Stack::isFull(){
  if(this->TOP == MAX-1){
    return true;
  }
  return false;
}

bool Stack::isEmpty(){
  if(this->TOP == -1){
    return true;
  }
  return false;
}

void Stack::push(int num){
  if(isFull()){
    std::cout << "Stack full, not appending" << std::endl;
  }else{
    this->TOP += 1;
    this->memory[this->TOP] = num;
  }
}

int Stack::pop(){
  if(isEmpty()){
    std::cout << "Stack is empty, not popping" << std::endl;
    return -1;
  }else{
    int retVal = this->memory[this->TOP];
    this->TOP -= 1;
    return retVal;
  }
}

void Stack::getContents() {
  for (int i = 0; i < this->TOP + 1; i++){
    std::cout << this->memory[i] << std::endl;
  }
}

int main(int argc, char *argv[]){
  Stack *newstack = new Stack();
  //Prints TOP: int index that points to the TOP of the stack
  //std::cout << newstack->TOP << std::endl;

  newstack->push(10);
  newstack->push(20);
  newstack->push(30);

  newstack->peek();

  newstack->getContents();
  // STACK->MEMORY = [10, 20, 30]

  newstack->push(40);
  newstack->push(40);
  // CANT PUSH BECAUSE STACK->TOP == STACK->MAX - 1, TWICE
  // MAX == 3

  std::cout << newstack->pop() << std::endl;
  std::cout << newstack->pop() << std::endl;
  std::cout << newstack->pop() << std::endl;
  // POPS 30, 20, 10, respectively

  std::cout << newstack->pop() << std::endl;
  // RETURNS -1 BECAUSE STACK IS EMPTY

  newstack->peek();
  return 1;
}
