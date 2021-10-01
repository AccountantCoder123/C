#include<stdio.h>

int main(){

  //C Program to find common elements between two arrays

	int arr1[]={1,2,3,4,5};
	int arr2[]={5,2,1,0,6};
	
	int count[]={0,0,0,0,0};
	
	int len=sizeof(arr1)/sizeof(arr1[0]);
	
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(arr1[i]==arr2[j]){
				count[i]+=1;
			}
		}
	}
	
	for(int i=0;i<len;i++){
		if(count[i]!=0){
			printf("%d\n",arr1[i]);
		}
	}
	return 0;
}
