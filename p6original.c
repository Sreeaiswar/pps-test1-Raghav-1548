#include<stdio.h>
int input()
{
  int n;
  printf("Enter any natural number: ");
  scanf("%d", &n);
  return n;
}
int sum_n(int sum,int n)
{
  sum = (n*(n+1))/2;
  return sum;
}
void output(int n,int sum)
{
  printf("The sum of first %d natural nmbers are %d", n,sum);
}
int main()
{
int n,sum;
n = input();
sum = sum_n(sum,n);
output(n,sum);
return 0;
}