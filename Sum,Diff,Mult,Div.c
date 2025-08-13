#include<stdio.h>

int main() {
  int num1,num2, sum, diff,multiplication,div;

  printf("Enter the first number:");
  scanf("%d" , &num1);

  printf("Enter the second number:");
  scanf("%d" , &num2);

  sum= num1+num2;
  printf("this is sum: %d/n", sum);

  diff=num1-num2;
  printf("this is diff: %d/n", diff);

  multiplication=num1*num2;
  printf("this is multiplication: %d/n", multiplication);

  div=num1/num2;
  printf("this is div: %d/n", div);

  }
