#include <iostream>

class ArrayLinkedList{
  private:
    static const int ARR_SIZE = 12;
    int LL_ARRAY[ARR_SIZE];
    int end = -1;

  public:
    void push(int val){
      //Adiciona um valor no fim da lista
      end += 1;
      LL_ARRAY[end] = val;
    }

    void showAll(){
      //Mostra todos os valores da lista
      for(int i = 0; i < ARR_SIZE; i++){
        std::cout << this->LL_ARRAY[i] << std::endl;
      }
    }

    int pop(){
      //Devolve e remove o ultimo elemento da lista
      int returnValue = LL_ARRAY[end];
      LL_ARRAY[end] = 0;
      end -= 1;
      return returnValue;
    }

    void insertAt(int val, int idx){

    }

    void removeAt(int val, int idx){

    }

    void updateAt(int val, int idx){

    }
    
    void peek(){

    }

    void peekAt(int idx){

    }
};

int main(){
  /*
   Ter um array com um tamanho
   Operações:
    Inserir(inicio, meio, fim)
    Remover(inicio, meio, fim)
    Atualizar dados
    Visualizar em index
   */

  ArrayLinkedList* arr = new ArrayLinkedList();
  arr->push(10);
  arr->push(30);
  int lastVal = arr->pop();
  arr->showAll();
  std::cout << "Last Val = " << lastVal << std::endl;
  return 1;
}
