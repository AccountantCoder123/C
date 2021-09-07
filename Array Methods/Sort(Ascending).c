#include<stdio.h>

int main(){
    int arr[]={5,3,2,1,0};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(arr[i]<arr[j]){   //Change to > for reverse sort
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
