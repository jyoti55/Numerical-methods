#include<stdio.h>
#include<conio.h>
#include<math.h>
float MAX(float a[3][1]){
      float l=a[0][0];
      for(int i=0;i<3;i++){
        for(int j=0;j<0;j++){
            if(abs(a[i][j])>abs(l)){
                l=a[i][j];
            }
        }
        
      }
      return l;
}
float maxerrorcalc (int a[3][1],int b[3][1]){
       int i,j;
       float D[3][1];
       for(i=0;i<3;i++){
        for(j=0;j<0;j++){
            D[i][j]=a[i][j]-b[i][j];
        }
       }
     return MAX(D);
}
int main()
{
   int n,i,j,k,sum;
   float error,lar;
   printf("Enter the order of matrix\n");
   scanf("%d",&n);
   int mat[n][n],X[3][1],Z[3][1],Y[3][1];
   printf("Enter the element of matrix\n");
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("Enter the value of mat[%d][%d]",i,j);
        scanf("%d",&mat[i][j]);
    }
   }
   printf("Enter the initial guess of vector\n");
   for(i=0;i<3;i++){
    for(j=0;j<0;j++){
        printf("Enter the value of mat[%d][%d]",i,j);
        scanf("%d",&X[i][j]);
    }
   }
   do{
   for(i=0;i<n;i++){
    for(j=0;j<0;j++){
   for(k=0;k<n;k++){
    sum=mat[i][k]*X[k][j];
   }
   Z[i][j]=sum;
}
    sum=0;
}
lar=MAX(Z);
for(i=0;i<3;i++){
    for(j=0;j<0;j++){
        Y[i][j]=Z[i][j]/lar;
    }

}
error=maxerrorcalc(X,Z);
for(i=0;i<3;i++){
    for(j=0;j<0;j++){
        X[i][j]=Y[i][j];
    }
}

   }while(error>=0.0005);
   
   



  


}