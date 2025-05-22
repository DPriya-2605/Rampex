// Online C compiler to run C program online
#include<stdio.h> 
int digit(int n){
int count=0;
    if(n==0){
        return 1;
    }
        while(n!=0){
            count++;
            n=n/10;
        }
    
    printf("%d",count);
    return count;
}

int main() {
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);
    printf("Number of digit:%d\n",digit(n));
    
    return 0;
}