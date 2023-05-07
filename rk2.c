#include<stdio.h>
#include<conio.h>
float func(float x,float y){
    return x+y;
}
int main(){
    float h,x,y,x_approx,k,k1,k2;
    printf("Enter the initial value x0 and y0\n");
    scanf("%f %f",&x,&y);
    printf("Enter the stepsize(h)\n");
    scanf("%f",&h);
    printf("Enter the value of x where you want to calculate y\n");
    scanf("%f",&x_approx);
    printf("The value of y(%.2f)=%.2f\n",x,y);
    while(x<x_approx){
        k1=h*func(x,y);
        k2=h*func(x+h,y+k);
        k=(k1+k2)/2;
        y=y+k;
        x=x+h;
        printf("The value of y(%.2f)=%.2f\n",x,y);
        

    }
    return 0;
}
