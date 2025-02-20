// 2.	Write a program in C that takes input in two matrices of order 3x2 and print the addition of two matrices. (write and use read_arr, print_arr  and sum_arr functions to get input, print and calculate the sum of 2 arrays)
#include<stdio.h>
void read_arr(int a[3][2],int b[3][2]){
    printf("enter the elements of the matrix 1 \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            printf("element a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of the matrix 2 \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            printf("element b[%d][%d] ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
}
int sum_arr(int a[3][2],int b[3][2],int c[3][2]){
    
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
           c[i][j]=a[i][j]+b[i][j];
        }}
    
}
void print_arr(int a[3][2],int b[3][2],int c[3][2]){
    printf("the elements of a matrix a is\n ");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            printf("\t%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the elements of b matrix is\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            printf("\t%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("the sum of the array a and b is:\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=1;j++){
            printf("\t%d\t",c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[3][2],b[3][2],c[3][2];
    read_arr(a,b);
    sum_arr(a,b,c);
   print_arr(a,b,c);
   return 0;
}
