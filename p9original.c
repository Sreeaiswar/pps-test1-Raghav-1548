#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];  
    int i,t=0;
    printf("Enter string1: ");
    scanf("%s", &str1);
    printf("Enter string2: ");
    scanf("%s", &str2);
    if(strlen(str1)==strlen(str2))
    {
    	for(i=0;str2[i]!='\0';i++)
    	{   
         if(str1[i]==str2[i])
           t++;
      }
         if (t==i)
         {
          printf("strings are equal");
         }
        else
        {
          printf("strings are not equal");
    	  }
      }
    
    else
    {
     printf("strings are not equal");
    }
}