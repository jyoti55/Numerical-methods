#include<stdio.h>
#include<conio.h>
float func (float x){
    return 1/x;
}
int main(){
    float x_L,x_U,h,s;
    int n,i;
    printf("Enter the number of interval\n");
    scanf("%d",&n);
    printf("Enter the lower limit of x\n");
    scanf("%f",&x_L);
    printf("Enter the Upper limit of x\n");
    scanf("%f",&x_U);
    h=(x_U-x_L)/n;
    s=func(x_L)+func(x_U);
    for(i=0;i<n-1;i++){
      s=s+2*func(x_L+i*h);
    }
  printf("The total sum is %f",&s);
}