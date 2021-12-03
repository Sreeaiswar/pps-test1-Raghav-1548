#include <stdio.h>
int input()
{
  int num1;
  printf("Enter num: ");
  scanf("%d",&num1);
  return num1;
}

int add(int num1, int num2)
{
  int sum;
  sum=num1+num2;
  return sum;
}
void output(int num1,int num2,int sum)
{
printf("The Sum of %d and %d = %d", num1,num2,sum);
}
int main()
{
  int num1,num2,sum=0;
  num1 = input();
  num2 = input();
  sum = add(num1,num2);
  output(num1,num2,sum);
return 0;
}


