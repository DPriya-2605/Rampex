#include<stdio.h>
int main(){
    int a,b;
    a=3;
    b=4;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\n b=%d\n",a,b);
    return 0;
}