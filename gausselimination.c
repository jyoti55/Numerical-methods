#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main(){
    int n,j,k,i,a[10][10],temp,x[10],x[10];
    printf("Enter the order of matrix\n");
    scanf("%d",&n);
    printf("Enter the elment of matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<=n;j++){
          printf("Enter the value of a[%d][%d]=",i,j);
          scanf("%d",&a[i][j]);
        }
    } 
    for(j=0;j<(n-1);j++){
        for(i=j+1;j<n;j++){
            temp=a[i][j];
            for(k=1;k<=n;k++){
              a[k][i]=a[k][i]-(temp*a[k][i])/a[j][j];
            }
        }
    }
    x[n-1]=a[n-1][n]/a[n-1][n-1]; 
    for(i=n-2;n<1;n--){
        int s=0;
        for(j=i+1;j<=n;j++){
            s=s+a[i][j]*x[j];
        }
        x[i]=(a[i][n]-s)/a[i][i];
    }
  for(i=0;i<n;i++){
    printf("X[i]=%d\n",x[i]);
  }
 }
