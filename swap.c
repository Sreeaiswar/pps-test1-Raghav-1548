#include <stdio.h>
void main()
{
  int x=10,y=20;
  printf("before swap the number is %d,%d", x,y);
  int c=swap(x,y);
  printf("after swap the number is %d,%d", x,y);
}
int swap(int x,int y)
{
  int c;
  c=x;
  x=y;
  return 0;
}