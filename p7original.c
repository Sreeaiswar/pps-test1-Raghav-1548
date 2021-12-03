#include<stdio.h>
#include<math.h>
float input()
{
    float n;
    printf("Enter a number to find square root ");
    scanf("%f", &n);
    return n;
}
float my_sqrt(float n)
{
    float result;
    result = sqrt(n);
    return result;
}
void output(float n,float result)
{
    printf("The square root of %.3f is %.3f", n,result);
}
int main()
{
    float n,result;
    n = input();
    result = my_sqrt(n);
    output(n,result);
    return 0;
}
