// Online C compiler to run C program online
#include <stdio.h>
int rev(int n)
{
if(n==0)
{
return 0;
}
printf("%d\n",n);
return rev(n-1);
}
int main() {
    // Write C code here
    printf("%d",rev(10));

    return 0;
}