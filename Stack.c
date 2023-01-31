#include<stdio.h>
void push();
void pop();
void display();
int stack[100];
int n,top=-1,choice,i;

int main(){
    printf("Enter  the number of data in an array\n");
    scanf("%d\n",&n);
    printf(" 1.Push\n 2.POP\n 3.Display\n 4.Exit");
    do{
        printf("Enter choice");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                printf("Exiting the program");
                break;
            }
        default:{

        }
    }

}while(choice!=4);
}


void push(){
    int x;
    if(top==n-1){
            printf("Stack Overflow");
    }
    else{
        printf("Enter the data");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop(){
    if(top>=0){
    printf("The popped item is %d", stack[top]);
    top--;
    }
    else{
        printf("Underflow");
    }
}
void display(){
    if(top>=0){
        printf("The elements in the stack are \n");
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
    else{
        printf("Stack is empty");
    }
}
