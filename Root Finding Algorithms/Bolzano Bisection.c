#include<stdio.h>
#include<math.h>

double function(double x){
	return pow(x,3)+pow(x,2)+5;
}

int main(){
	double guess[]={-3,1};
	if(function(guess[0])*function(guess[1])>1){
		printf("The initial guesses are incorrect !");
	}
	
	else{
		for(int i=0;i<100;i++){
			double estimate=(guess[0]+guess[1])/2;
			if(function(guess[0])*function(estimate)<0.00005){
				guess[1]=estimate;
			}
			else{
				guess[0]=estimate;
			}
		
			if(fabs(function(estimate))<0.005){
				printf("The root is %lf",estimate);
				break;
			}
		}
	}
	return 0;
}

