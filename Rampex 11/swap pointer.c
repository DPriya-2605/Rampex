// Online C compiler to run C program online
#include <stdio.h>
int main(){
    int a=3,b=5;
    int *x=&a;
    int *y=&b;
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}

