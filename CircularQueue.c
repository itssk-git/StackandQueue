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
        if(rear==-1&&front==-1){
            front=0;
            rear=0;
            printf("Enter data");
            scanf("%d\n",&y);
            x=y;
            queue[rear]=x;
        }
        else if((rear+1)%n==front){
                printf("Queue is full");
        }
        else{
            rear=(rear+1)%n;
            queue[rear]=x;
        }

    }

    void dequeue(){
        if(front==-1&&rear==-1){
            printf("Queue is empty");
        }
        else if(front==rear){
            front=rear=-1;
        }
        else{
            front=(front+1)%n;
        }
    }

    void display(){
        int i=front;
        if(front==-1&&rear==-1){
            printf("Queue is empty");
        }
        else{
            printf("Queue is \n");
            while(i!=rear){
                printf("%d\n",queue[i]);
                i=(i+1)%n;
                }
            }
}

