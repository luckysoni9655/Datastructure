//circular queue

#include<stdio.h>
#include<conio.h>
void enqueue();
int dequeue();
void display();
int queue[4],n=4,front=-1,rear=-1;
void main()
{
    int ch;
    printf("\nwhich operation domypu want yo perform");
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
    while(1)
    {
        printf("\nenter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            default:
            printf("invalid choice");
        }
    } 
}

void enqueue()
{int e;
printf("enter the element that you want to insert");
scanf("%d",&e);
    if((rear+1)%n==front)
    {
printf("que is over flow");
    }
else if(front ==-1,rear==-1 )
{
    front=0;
    rear=0;
    queue[rear]=e;
}
else
{
    rear=(rear+1)%n;
queue[rear]=e;
}
}
int dequeue()
{
    if(front==-1)
    {
        printf("que is empty");
    }
    else if(front==rear)
{
    printf("\nthe elment is%d\n",queue[front]);
    front=-1;
    rear=-1;
}
else 
{
    printf("\nthe elment is%d\n",queue[front]);
    front=(front+1)%n;
}
return;
}


void display()
{
    if(front==-1)
{
    printf("que is empty");
}
 if(rear>=front)
{
for(int i=front;i<=rear;i++)
{
    printf("%d ",queue[i]);
}
}
else
{
    for(int i=front;i<n;i++)
    {
        printf("%d  ",queue[i]);
    }

        for(int i=0;i<=rear;i++)
    {
        printf("%d  ",queue[i]);
    }
}
}

/*
********----output-----****
which operation domypu want yo perform
1.enqueue
2.dequeue
3.display
4.exit
enter the choice1
enter the element that you want to insert22

enter the choice1
enter the element that you want to insert24

enter the choice3
22 24 
enter the choice2

the elment is22

enter the choice3
24 
enter the choice4
invalid choice

*/