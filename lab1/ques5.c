// 5.	Define function void delete(int a[], int position) to  delete a value from specific position in an array a, given by the user. Write a program in C that uses this function to delete an element from a particular position. Print the original and post deletion contents of the array.
#include<stdio.h>
void delete(int a[],int pos,int n){
    for(int i=pos;i<=n-1;i++){
        a[i]=a[i+1];
    }
    n=n-1;
    for (int i = 0; i < n; i++)
    {
        printf("the %d element is %d \n",i,a[i]);
    }
    
}

int main(){
    int a[100];
    int i,n,pos;
    printf("enter the number of elements in array ");
    scanf("%d",&n);

    printf("enter the numbers");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    

    printf("enter the index of element to be deleted ");
    scanf("%d",&pos);
    
    
    delete(a,pos,n);
}

