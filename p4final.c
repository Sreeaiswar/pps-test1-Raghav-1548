#include <stdio.h>
#include <math.h>
int input()
{
  int a;
  printf("Enter the number : ");
  scanf("%d", &a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c && b!=c)
  {
    printf("%d is the greatest of all.", a);
  }
  else if (b>a && b>c && a!=c)
  {
    printf("%d is the greatest of all", b);
  }
  else if (c>a && c>b && a!=b)
  {
    printf("%d is the greatest of all", c);
  }
  else if (a==b && a>c && b>c)
  {
    printf("%d and %d are equal and %d is the smallest of all", a,b,c);
  }
  else if (b==c && b>a && c>a)
  {
    printf("%d and %d are equal and %d is the smallest of all", b,c,a);
  }
  else if (a==c && a>b && c>b)
  {
    printf("%d and %d are equal and %d is the smallest of all", a,c,b);
  }
  else if (a==b && c>a && c>b)
  {
    printf("%d is the greatest of all %d and %d are equal", c,a,b);
  }
  else if (b==c && a>b && a>c)
  {
    printf("%d is the greatest of all %d and %d are equal", a,b,c);
  }
  else if (a==c && b>a && b>c)
  {
    printf("%d is the greatest of all, %d and %d are equal",b,a,c);
  }
  else if (a==b && b==c)
  {
    printf("All are equal");
  }
  else
  {
    printf("Enter a valid number");
  }
}
int main()
{
  int a,b,c;
  a = input();
  b = input();
  c = input();
  cmp(a,b,c);
  return 0;
}