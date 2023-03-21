#include <stdio.h>
int fibo(int arr,int n);
int main (){
    
    int n;
    scanf("%d enter number of elements-",&n);
    int arr[n];
    fibo(arr,n);
    for (int i=0;i<n; i++){
        printf("%d index = %d\t ",i,arr[i]);
    }

    return 0;
}

int fibo(int arr,int n){
    int a =0,b =1;
    int sum = 0;
    for (int i=0;i<n;i++){
        arr[i]=sum;
        a=b;
        b=sum;
        sum =a+b;

    }
}