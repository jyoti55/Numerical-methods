#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main(){
    int n,j,k,i,a[10][10],temp,x[10];
    printf("Enter the order of matrix\n");
    scanf("%d",&n);
    printf("Enter the elment of matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<=n;j++){
          printf("Enter the value of a[%d][%d]=",i,j);
          scanf("%d",&a[i][j]);
        }
    }
for(j=0;j<n;j++){
   if (abs(a[i][j])<=0.05){
      printf("Pivot elemnt is zero\n");
      return 0;
   }
   for(i=0;i<n;i++){
    if(i=!j){
        temp=a[i][j];
        for(k=0;k<=n;k++){
            a[i][k]=a[i][k]-(temp*a[j][k])/a[j][j];
        }
    }
   }

}
printf("The value of unknowmns are :\n");
for(i=0;i<n;i++){
    x[i]=(a[i][n-1])/a[i][i];

}

 }