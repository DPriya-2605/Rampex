#include <stdio.h>

int main()
{
   int n=123,sum=0;
   while(n!=0)
   {
        sum+=n%10;
        n=n/10;
   }
        printf("The sum of n is:%d",sum);
     return 0;
}