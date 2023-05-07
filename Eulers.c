#include<stdio.h>
#include<conio.h>
float func(float x,float y){
    return -x*y*y;
}
int main(){
    float h,x,y,x_approx;
    printf("Enter the initial value x0 and y0\n");
    scanf("%f %f",&x,&y);
    printf("Enter the stepsize(h)\n");
    scanf("%f",&h);
    printf("Enter the value of x where you want to calculate y\n");
    scanf("%f",&x_approx);
    printf("x\ty\n");
    printf("%.2f\t%.4f\n",x,y);
    while(x<x_approx){
        
        x=x+h;
        y=y+h*func(x,y);
       
    printf("%.2f\t%.4f\n",x,y);
    }
    

return 0;
}

