#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int n,i,j;
    float x[20],y[20],xp;
    printf("Enter the number of data points\n");
    scanf("%d",&n);
    printf("Enter the data points of x\n");
    for( i=0;i<n;i++){
        scanf("%f",&x[i]);
    }
    printf("Enter the data points of y\n");
    for( i=0;i<n;i++){
        scanf("%f",&y[i]);
    }
    printf("Enter the value of xp\n");
    scanf("%f",&xp);
    float sum=0;
    for( i=0;i<n;i++){
        float product = 1.0;
        for( j=0;j<n;j++){
            if(i!=j){
            product=product*(xp-x[j])/(x[i]-x[j]);
        }

    }
    sum=sum+y[i]*product;
}
printf("The required value is %.4f\n",sum);
return 0;
}

