#include <stdio.h>

/*
Lados negativos comparado com Binary Search
Como a pesquisa no array é linear, o pior caso numa pesquisa é O(n), ou seja não escala bem
No binary Search, é feito o chamado "divide and conquer", que permite que o pior tempo de execução seja O(log n), que é muito eficiente
*/

void printArr(int arr[], int arrSize){
  for(int i = 0; i < arrSize; i++){
    printf("%d ", arr[i]);
  }
}

int search(int arr[], int arrSize, int searchValue){
  for(int i = 0; i < arrSize; i++){
    if(searchValue == arr[i])
      return i;
  }
  return -1;
}

int main(int argc, char **argv[]){

  int array[] = {1, 3, 4, 12, 15, 20, 33, 34};
  int arrSize = sizeof(array) / sizeof(array[0]);

  printArr(array, arrSize);

  //Search interaction
  printf("Value to search = ");

  int n;
  scanf("%d", &n);
  
  int res = search(array, arrSize, n);

  //Objective find index of n
  printf("The function returns:\n%d\n", res);


  return 1;
}
