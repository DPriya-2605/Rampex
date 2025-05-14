#include <stdio.h>

int main() {
    int a,b,temp;
    a=5;
    b=6;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}