#include <stdio.h>

int main()
{
   int n=12345,rev=0;
   int orig=n;
   while(n!=0)
   {
        rev=rev*10+n%10;
        n=n/10;
   }
   printf("Rev of n is:%d\n",rev);
   if(orig==rev){
       printf("Its palindrome");
   }
   else
   {
       printf("Not palindrome");
   }
     return 0;
}