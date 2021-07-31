#include<stdio.h>
#include<math.h>

double sum_array_square(double arr[],int size){
  double sum=0;
  for(int i=0;i<size;i++){
    sum+=pow(arr[i],2);
  }
  return sum;
}

int main(){
  double x_val[]={-1,0,-5,20,-25,30,-31,15,16,20,-11,18,21,25};
  double y_val[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};

  double a=0; //Intercept=0
  double b=0; //Slope=0

  int no=sizeof(x_val)/sizeof(x_val[0]);
  double error[no-1];
  double y[no-1];
  double a_list[no-1];
  double b_list[no-1];

  double lr=0.001; //Learning rate=1

  for(int i=0;i<100000;i++){
    double sum1=0;
    double sum2=0;
    for(int j=0;j<no;j++){
        y[j]=b*x_val[j]+a;
        error[j]=y[j]-y_val[j];
        a_list[j]=error[j];
        sum1+=a_list[j];
        b_list[j]=error[j]*x_val[j];
        sum2+=b_list[j];
    }
    a-=lr*2*sum1/no;
    b-=lr*2*sum2/no;
  }
  printf("Mean Square Error=%lf\n",sum_array_square(error,no)/no);
  printf("Intercept:%lf\tSlope:%lf\n\n",a,b);
  return 0;
}
