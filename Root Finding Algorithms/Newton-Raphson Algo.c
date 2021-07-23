#include<stdio.h>
#include<math.h>

double func(double x);   
double derivative(double x);   

int main(){
	double x=3;
	for(int i=0;i<100;i++){
		x=x-(func(x))/derivative(x);
		if(abs(func(x))<0.0005){
			printf("The root is %lf",x);
			break;
		}
	}
	return 0;
}

double func(double x){
	return pow(x,5)+pow(x,2)+1;   //f(x)=x^5+x^2+1
}

double derivative(double x){
	double h=0.000001;
	return (func(x+h)-func(x))/h; //Function for calculating the approximate derivative of the function
}

