#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Prints out fizz buzz in a range from n1 to n2
void FizzBuzz(long n1, long n2)
{
	if(n1>=n2){
		printf("Weird range bro\n");
		return;
	}

	for(int i = n1; i < n2 + 1; i++){
		if(i % 3 == 0){
			printf("Fizz\n");
		} else if(i % 5 == 0){
			printf("Buzz\n");
		}else{
      printf("%d \n", i);
		}
	}
}

bool IsNum(char ptr[]){
  //TODO:se o argumento começar com um numero e ter um caracter a seguir dá um falso positivo ex(./test 1 2a (devia de dar o erro na linha 44))
  if(atol(ptr)){
    return true;
  }
  return false;
}


int main(int argc, char *argv[]){
  int missArgs = 2 - (argc - 1);
  if(missArgs == 0){

    //TODO:Se calhar era melhor fazer um loop para escalar no futuro
    if(!IsNum(argv[1])){
      printf("First argument needs to be a number (int)\n");
      return -1;
    }

    if(!IsNum(argv[2])){
      printf("Second argument needs to be a number (int)\n");
      return -1;
    }

    long num1 = strtol(argv[1], &argv[1], 10);
    long num2 = strtol(argv[2], &argv[2], 10);

    FizzBuzz(num1, num2);

    return 1;

  }else if(missArgs > 0){
	  printf("Missing %d arguments\n", missArgs);
  }else{
	  printf("Too many arguments, only two integers needed\n");
  }
}
