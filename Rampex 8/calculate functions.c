// Online C compiler to run C program online
#include <stdio.h>
    int add(int x,int y){
    return x+y;
}
    int sub(int x,int y){
    return x-y;
    }
    int multi(int x,int y){
    return x*y;
    }
    int div(int x,int y){
    return x/y;
    }
int main(){
    printf("add %d\n",add(3,5));
    printf("sub %d\n",sub(3,5));
    printf("multi %d\n",multi(3,5));
    printf("div %d\n",div(3,5));
    return 0;
}