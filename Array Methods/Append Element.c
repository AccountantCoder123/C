#include<stdio.h>


double* append(double arr[],int size,double element){
    static double array[100];
    for(int i=0;i<size;i++){
        array[i]=arr[i];
    }
    array[size]=element;
    return array;
}

int main(){
    double* ptr;
    double a[]={1,2,3,4,5};
    ptr=append(a,sizeof(a)/sizeof(a[0]),6);
    for(int i=0;i<sizeof(a)/sizeof(a[0])+1;i++){
        print("%lf\n",ptr[i]);
    }
    return 0;
}
