#include <stdio.h>

int reverse(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }
    else
    {
    return reverse(n/10,rev*10+n%10);
    }
}
int main(){
    int n=51364;
    int result=reverse(n,0);
    printf("%d",result);
    return 0;
}