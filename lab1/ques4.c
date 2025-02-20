// 4.	Define function void insert(int a[], int value, int position) to  insert a value at specific position in an array a, given by the user. Assume that the array is large enough to add the new value. Write a program in C that uses this function to do the insertion of value at a position in the array.

#include<stdio.h>
void insert(int a[],int value,int pos,int n){
    for(int i=n-1;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=value;
    for (int i = 0; i < n; i++)
    {
        printf("the %d element is %d \n",i,a[i]);
    }
    
}

int main(){
    int a[100];
    int i,n,x,pos;
    printf("enter the number of elements in array ");
    scanf("%d",&n);

    printf("enter the numbers");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the new element to be inserted ");
    scanf("%d",&x);

    printf("enter the position ");
    scanf("%d",&pos);

    n=n+1;
    insert(a,x,pos,n);
}
