#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int digit_sum(int n){
  if(n==0){
    return 0;
  }
  else{
    return n%10 + digit_sum(n/10);
  }
}


int main(void) {
  int n;
  char* intvalue=readline("Enter an int: ");
  n=atoi(intvalue);
  printf("sum of digits of %d is %d.\n",n,digit_sum(n));
}