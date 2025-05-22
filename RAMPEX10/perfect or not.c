#include <stdio.h>
int perfect(int n){
    int sum=0;
    for(int i =1;i< n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    return sum;
}

int main() {
    // Write C code here
    int n;
    printf("enter");
    scanf("%d",&n);
    int  num =perfect(n);
    if(num==n){
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}