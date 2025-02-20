// 2.	Write a program in C to call a fuctionfunc_greatest(int a, int b, int c) to find the greatest number among three number given by user.
#include<stdio.h>
int func_greatest(int a,int b, int c);
int main(){
    int a,b,c;
    printf("enter the numbers a, b and c");
    scanf("%d %d %d",&a,&b,&c);
    func_greatest(a,b,c);
    
}

int func_greatest(int a,int b, int c){
    if(a>b && a>c){
        printf("a is greatest number");
    }
    else if(b>a && b>c){
        printf("b is greatest number");
    }
    else{
        printf("c is the greatest number");
    }
}