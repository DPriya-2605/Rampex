#include <stdio.h>

int main() {
    int sum=0;
    int average=0;
    int arr[]={40,10,30,20,60};
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
        printf("%d\n",sum);
        printf("Average=%d\n",sum/5);
        return 0;
    }
    