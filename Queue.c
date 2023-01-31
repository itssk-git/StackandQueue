#include <stdio.h>
void enqueue(int x);
void dequeue();
void display();
int i,choice,n,y;
int queue[100];
int front=-1, rear=-1;

int main(){
    printf("Enter the number of data in an array \n");
    scanf("%d", &n);
    printf("1.enq\n2.Deq\n3.disp\n4.Exit");

    do{
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            {

            enqueue(y);

            break;
            }
        case 2:
            {
                dequeue();
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
        default:
            printf("Enter valid choice");
        }

    }while(choice!=4);

}
void enqueue(int x){
    if(rear==n-1)
    {
        printf("Queue Overflow");
    }
    else{
            if(front=-1){
                    front=0;

            }


                printf("Enter the data");
                scanf("%d",&y);
                x=y;
                rear++;
                queue[rear]=x;


    }
}
void dequeue(){
    if(front==-1||front>rear){
        printf("Underflow");
    }
    else if(front==n-1){
            front =-1;
    }
    else{
        front++;
    }
}
void display(){
    if(front==-1){
        printf("IS EMPTY");
    }
    else{
            printf("Queue is \n");


    for(i=front;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}
}

