#include<stdio.h>

void pop(int arr[],int size,int index){
    int result[size-1];
    for(int i=0;i<index;i++){
        result[i]=arr[i];
    }
    for(int i=index+1;i<size;i++){
        result[i-1]=arr[i];
    }
    
    for(int i=0;i<size-1;i++){
    	printf("%d\n",result[i]);
	}
}
