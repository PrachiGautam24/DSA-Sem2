// 1.	Write a program in C to  call a function func_palindrome (int n) to check whether a number is palindrome or not.
#include<stdio.h>
int func_palindrome(int n);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
    if(func_palindrome(n)){
        printf("the number is palindrome");
    }
    else{
        printf("not palindrome");
    }
}

int func_palindrome(int n){
    int rev=0;
    int ori=n;
    while(n!=0){
         int r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(ori==rev){
        return 1;
    }
    else{
        return 0;
    }
}
