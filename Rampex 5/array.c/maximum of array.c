#include <stdio.h>

int main() {
    int max=0;
    int arr[]={90,2,8,4,5,888};
    
    for(int i=0;i<6;i++){ 
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}