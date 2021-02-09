#include <iostream>

class ArrayLinkedList{
  private:
    static const int ARR_SIZE = 12;
    int LL_ARRAY[ARR_SIZE];
    int end = -1;

  public:
    void push(int val){
      if((end + 1) >= ARR_SIZE){
        std::cout<<"Array is out of memory storage"<<std::endl;
        return;
      }
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
      if(end == -1){
        std::cout<<"No elements to pop"<<std::endl;
        return -1;
      }
      int returnValue = LL_ARRAY[end];
      LL_ARRAY[end] = 0;
      end -= 1;
      return returnValue;
    }

    void updateAt(int idx, int val){
      if((idx + 1) >= ARR_SIZE){
        std::cout<<"Pointer out of list range"<<std::endl;
        return;
      }
      LL_ARRAY[idx] = val;
    }
    
    void peek(){
      if(end == -1){
        std::cout<<"No elements in list"<<std::endl;
        return;
      }
      std::cout<<LL_ARRAY[0]<<std::endl;
    }

    void peekAt(int idx){
      if(end == -1){
        std::cout<<"No elements in list"<<std::endl;
        return;
      }

      if((idx + 1) >= ARR_SIZE){
        std::cout<<"Pointer out of list range"<<std::endl;
        return;
      }
      std::cout<<LL_ARRAY[0]<<std::endl;
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
  arr->peek();
  arr->push(10);
  arr->peek();
  arr->peekAt(30);
  return 1;
}
