// Online C compiler to run C program online
#include <stdio.h>
int main(){
    int a=1,b=2;
    int c=0;
    int *x=&a;
    int *y=&b;
    c=*x+*y;
    printf("%d\n",c);
    return 0;
}

