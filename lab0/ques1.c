// 1.	Write a program in C to call two functions func_iter(int n), func_rec(int n), to print the factorial of a number using iteration and recursion respectively.
#include<stdio.h>
int func_iter(int a);
int func_rec(int a);
int main(){
    int a,i;
    printf("enter the number you want a factorial of:");
    scanf("%d",&a);
    printf("the factorial of the number is %d \n",func_rec(a));
    printf("the factorial of the number is %d",func_iter(a));
    
}
int func_iter(int a){
    int i;
    int fact=1;
    if (a<0){
        printf("enter positive number");
    }
    else{
        for(i=1;i<=a;i++){
        fact*=i;
    }}
    return(fact);
} 
int func_rec(int a){
    int i;
    int fact=1;
    if(a>=1){
        return a*func_rec(a-1);
    }
    else{
        return 1;
    }
}