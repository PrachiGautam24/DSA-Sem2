// 1.	Write a program in C to print 2 Dimensional matrix of order 2X3, after reading from the user. (write and use read_arr and print_arr functions to get input and print the array)
#include<stdio.h>
int read_arr(int a[2][3]){
    printf("enter the elements of the matrix \n");
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            printf("element a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
int print_arr(int a[2][3]){
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            printf("\t%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[2][3];
    read_arr(a);
    print_arr(a);
}