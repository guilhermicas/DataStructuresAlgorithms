#include <stdio.h>
#include <stdlib.h>

// Outputs array
void printArray(int arr[], int arrSize){
  for(int i = 0; i < arrSize; i++){
    //printf("nr%d: %d\n", i, arr[i]);
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int binarySearch(int searchValue, int arr[], int arrSize){
  /*
   @brief - Binary Search
   @param searchValue - The value that will be searched
   @param arr[] - Array in which the search will be made
   @param arrSize - Size of the array
   @return - Returns the index of the number if it found it, else -1
  */
  int low = 0;
  int high = arrSize - 1;

  //if top < bot then it didnt find number in array
  while(low <= high){
    int mid = low + (high - low) / 2;
    printf("low = %d\nhigh = %d\nmid = %d\n", low, high, mid);

    //The search
    if(searchValue == arr[mid]){
      printf("[Value %d found at index %d]\n", arr[mid], mid);
      return mid;
    }else if(searchValue > arr[mid]){
      low = mid + 1;
    }else if(searchValue < arr[mid]){
      high = mid - 1;
    }
  }

  //If it exits out of loop it means it didnt find in array
  printf("[Value not found]\n");
  return -1;

}

int main(int argc, char **argv[]){
  /*
    Binary search in a sorted int array
  */

  int array[] = {1, 3, 7, 12, 15, 22, 23};
  int arrayLen = sizeof(array) / sizeof(array[0]);

  printArray(array, arrayLen);

  //Search interaction
  printf("Value to search = ");

  int n;
  scanf("%d", &n);

  int res = binarySearch(n, array, arrayLen);

  //Objective find index of n
  printf("The function returns:\n%d\n", res);

  return 1;
}
