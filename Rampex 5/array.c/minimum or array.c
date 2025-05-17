#include <stdio.h>

int main() {
    int min;
    int arr[]={90,2,8,4,5,888};
    
    for(int i=0;i<6;i++)
    { 
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d\n",min);
    return 0;
}