#include <stdio.h>
#include <stdlib.h>

int array[100];
int arrLen = sizeof(array) / sizeof(array[0]);

// Outputs array
void printArray(int arr[]){
  for(int i = 0; i < arrLen; i++){
    //printf("nr%d: %d\n", i, arr[i]);
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void arrayInit(int arr[]){
  for(int i = 0; i < arrLen; i++){
    array[i] = i + 10;
  }
}

int binarySearch(int arr[], int num){
  /*
   @brief - Binary Search
   @param arr[] - Array in which the search will be made
   @param num - The value that will be searched
   @return - Returns the index of the number if it found it, else -1
  */
  int bot = 0;
  int top = arrLen - 1;
  int mid = top / 2;
  int midVal;

  //if top < bot then it didnt find number in array
  while(top > bot){
    //Helper variables
    int tmp = 0;
    midVal = arr[mid];

    //The search
    if(num > midVal){
      tmp = bot;
      bot = mid;
      mid = top - ((top - tmp) / 2);
      continue;
    }else if(num < midVal){
      tmp = top;
      top = mid;
      mid = top + ((bot - tmp) / 2);
      continue;
    }else if(num == midVal){
      printf("[Value %d found at index %d]\n", midVal, mid);
      return mid;
    }

    printf("[Value not found]\n");
    break;
  }

  //If it exits out of loop it means it didnt find in array
  return -1;

  //printf("bot = %d\ntop = %d\nmid = %d\n", bot, top, mid);
}

int main(int argc, char **argv[]){
  /*
    Binary search in a sorted int array
  */

  //Initializes array values
  arrayInit(array);

  printArray(array);
  
  //Search interaction
  printf("Value to search = ");

  int n;
  scanf("%d", &n);

  int res = binarySearch(array, n);

  //Objective find index of n
  printf("The function returns:\n%d\n", res);

  return 1;
}

