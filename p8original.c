#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    printf("Enter the number to find square root: ");
    scanf("%lf", &a);
    b = sqrt(a);
    printf("The sqrt of %.1lf is %.3lf", a,b);
    return 0;
}