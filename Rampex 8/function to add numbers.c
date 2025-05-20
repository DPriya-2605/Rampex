#include <stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    add(2,3);
    printf("%d",add(2,3));
    return 0;
}