#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("Enter the number to find square root: ");
  scanf("%f", &n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt_result;
  sqrt_result = sqrt(n);
  return sqrt_result;
}
void output(float n,float sqrt_result)
{
  printf("The squareroot of %f is %f", n,sqrt_result);
}
int main()
{
  float n, sqrt_result;
  n = input();
  sqrt_result = my_sqrt(n);
  output(n,sqrt_result);
}