#include <stdio.h>

void func(int *val){
  *val = *val * 2;
}

void main(){
  int x = 10;
  func(x);
  printf("%d\n", x);
}
