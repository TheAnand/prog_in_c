#include<stdio.h>
int main() {
  int num1 , num2;
  printf("Enter first number : ");
  scanf("%d",&num1);
  printf("Enter second number : ");
  scanf("%d",&num2);
  num1 = num1 + num2;    // ^
  num2 = num1 - num2;    // ^
  num1 = num1 - num2;    // ^
  printf("_____________________\n");
  printf("Number first is : %d\nNumber second is : %d\n",num1,num2);
}
