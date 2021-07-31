
//Implmentation of Logistic Regression in C

#include<stdio.h>
#include<math.h>

double sigmoid(double intercept,double slope,double x){
  return 1/(1+exp(-intercept-slope*x));
}

int main(){
  double x_val[]={1,2,3,4,5,6,7,8,9};
  double y_val[]={1,0,0,1,1,1,1,0,1};

  double a=0;  //Intercept=0
  double b=0;  //Slope=0

  int no=sizeof(x_val)/sizeof(x_val[0]);
  double error[no-1];
  double y[no-1];
  double a_list[no-1];
  double b_list[no-1];

  double lr=1;  //Learning Rate=1

  for(int i=0;i<100000;i++){
  	double sum1=0;
	  double sum2=0;
    for(int j=0;j<no;j++){
       y[j]=1/(1+exp(-b*x_val[j]-a));
       error[j]=y[j]-y_val[j];
       a_list[j]=error[j]*pow(y[j],2)*exp(-b*x_val[j]-a);
       sum1+=a_list[j];
       b_list[j]=a_list[j]*x_val[j];
       sum2+=b_list[j];
	}
	  a-=lr*2*sum1/no;
    b-=lr*2*sum2/no;
  }
  printf("Intercept:%lf\tSlope:%lf\n\n",a,b);

  for(int i=0;i<no;i++){
  	printf("X Value:%lf   Actual Y Value:%lf   Predicted Y Value:%lf\n",x_val[i],y_val[i],sigmoid(a,b,x_val[i]));
  }

  return 0;
}
