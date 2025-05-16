#include <stdio.h>

int main()
{
   int n=12345,rev=0;
   while(n!=0)
   {
        rev=rev*10+n%10;
        n=n/10;
   }
        printf("The reverse of n is:%d",rev);
     return 0;
}