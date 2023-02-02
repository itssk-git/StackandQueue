#include<stdio.h>
int n;
int main(){
    printf("Enter the number of discs");
    scanf("%d",&n);
    printf("The tower of Hanoi\n");
    TOH(n,'s','a','d');


}
void TOH(int n,char source,char aux,char end){

    if (n<0){
        printf("Illegal Entry");
    }
    else if(n==1){
        printf("Move disc from %c to %c\n",source,end);
    }
    else{
        TOH(n-1,source,end,aux);
        TOH(1,source,aux,end);
        TOH(n-1,aux,source,end);
    }
}

