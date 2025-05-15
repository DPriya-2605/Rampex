#include<stdio.h>
int main(){
    int month=2;
    switch(month){
        case 1:
        printf("30 days");
        break;
        case 2:
        printf("28 days");
        break;
        case 3:
        printf("31 days");
        break;
        default:
        printf("no otherday");
        return 0;
    }
}
  