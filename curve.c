#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    float x[100],y[100],a,b,SUMx=0,SUMy=0,SUMxy=0,SUMx2=0;
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the data of x\n");
    for(i=0;i<n;i++){
        scanf("%f",&x[i]);

    }
    for(i=0;i<n;i++){
    printf("Enter the value of data Y\n");
    scanf("%f",&y[i]);
}
for(i=0;i<n;i++){
    SUMx=x[i]+SUMx;
    SUMy=y[i]+SUMy;
    SUMxy+=x[i]*y[i];
    SUMx2+=x[i]*x[i];
}
if((n*SUMx2-SUMx*SUMx)!=0){
a=(SUMy*SUMx2-SUMx*SUMxy)/(n*SUMx2-SUMx*SUMx);
b=(n*SUMy-SUMx*SUMxy)/(n*SUMx2-SUMx*SUMx);
}
else{
    printf("Determinant cannot be zero\n");
    exit (0);
}
printf("The normal equation is y=%f+%fx",a,b);
}






