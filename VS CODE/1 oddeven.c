#include <stdio.h>
void checkoddEven (int n)
{
int r= n % 2;
if (r==0) 
    {
    printf("Even");
    }
else {
    printf("Odd");
   }
}
int main()
{
    int n=10;
    checkoddEven(n);
    return 0;
}