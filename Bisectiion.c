#include<stdio.h>
#include<conio.h>
float func(float x){
    return x*x-3;
}
void bisection(float a, float b){
    while((b-a)>=0.01) {
    if(func(a)*func(b)>0){
        printf("You have not assumed right a and b\n");
        return 0;
    }
    float c = (a+b)/2;
    if (func(c)<0){
        a=c;
    }
    else if(func(c)>0){
        b=c;
    }
    else{
        break;
    }
    printf("The value of root is %.3f",c);
}
}
int main(){
    float a,b;
    printf("Enter the interval a and b\n");
    scanf("%f %f",&a,&b);
    bisection(a,b);
    return 0;
}

