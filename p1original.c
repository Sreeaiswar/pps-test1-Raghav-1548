#include <stdio.h>
int main()
{
  double n1;
  double n2;
  double result;
  printf("Enter n1: ");
  scanf("%lf", &n1);
  printf("Enter n2 :");
  scanf("%lf", &n2);
  result=n1+n2;
  printf("There you go Raghav:)\nThe result is %.3lf", result);
  return 0;
}