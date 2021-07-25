#include<stdio.h>
#include<math.h>

double function(double x){
  return pow(x,5)+pow(x,4)+2; //f(x)=x^5+x^4+2;
}

int length(double arr[],int size){
  int out=0;
  for(int i=0;i<size;i++){
    if(arr[i]==NULL){
      break;
    }
    out+=1;
  }
  return out;
}

int main(){
  double estimates[100]={-2.0,-1.0};
  if(function(estimates[0])*function(estimates[1])>0){
    printf("Incorrect Estimates !");
  }
  else{
    for(int i=0;i<100;i++){
      estimates[i+2]=estimates[i+1]-(function(estimates[i+1])*(estimates[i+1]-estimates[i]))/(function(estimates[i+1])-function(estimates[i]));
      if(fabs(function(estimates[length(estimates,sizeof(estimates)/sizeof(estimates[0]))-1]))<0.000005){
        printf("The root is %lf",estimates[length(estimates,sizeof(estimates)/sizeof(estimates[0]))-1]);
        break;
      }
    }
  }
  return 0;
}
