#include<stdio.h>
int n;
int main(){
    printf("Enter the number in series");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\n", fib(i));
    }

}
int fib(int num){
    if(num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }
    else{
        return fib(num-2)+fib(num-1);
    }

}
