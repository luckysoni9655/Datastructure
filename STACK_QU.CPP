#include<iostream.h>
#include<conio.h>
#define n 5
int arr[n];
int top=-1;
int rear=-1;
int front=-1;

void push()
{
int m;
cout<<"enter the element"<<endl;
cin>>m;
if(top==n-1)
{
cout<<"full";
}
else
{
top++;
arr[top]=m;
}
}

void pop()
{
if(top==-1)
{
cout<<"empty";
}
else
{ cout<<arr[top];
top--;
}
}


void displays()
{int i;
if(top==-1)
{cout<<"empty";
}
 for(i=top;i>=0;i--)
 {
 cout<<arr[i];
 }
}
void enque()
{ int k;
cout<<"enter the element";
cin>>k;
if(rear==n-1)
{ cout<<"over flow";
}
else if(rear==-1&&front==-1)
{rear=front=0;
arr[rear]=k;
}
else
{
  rear++;
  arr[rear]=k;
 }
}

void deque()
{if(front==-1&&rear==-1)
{cout<<"under flow";
}
else if(front==rear)
{cout<<arr[front];
front=rear=-1;
}
else
{
cout<<arr[front];
front++;
}
}
void displayq()
{    int i;
if(rear==-1&&front==-1)
{cout<<"empty";
}

for(i=front;i<rear+1;i++)
{cout<<arr[i];
}
}


void main()
{
 int ch;
 clrscr();
 cout<<"enter the choice"<<endl;
 cout<<"1.STACK OPERATION\n2.QUEUE OPERATIONS"<<endl;
 cin>>ch;
 while(ch!=0)
 {
 if(ch==1)
 { int che;
 cout<<"choose the operation on stack"<<endl;
 cout<<"1.PUSH\n2.POP\n3.DISPLAYS\npress 0 for next operation(queue)"<<endl;
 cin>>che;
 while(che!=0)
 {
 switch(che)
 {
 case 1:
 {
   push();
 // enque();
 break;
 }
 case 2 :
 {
 pop();
//deque();
 break;
}
 case 3 :
 {  displays();
 break;
}
default:
cout<<"invalid";
}
cout<<"enter the choice"<<endl;
cin>>che;
}}

else
{
 int chee;
 cout<<"choose the operation on QUEUE"<<endl;
 cout<<"1.ENQUEUE\n2.DEQUEUE\n3.DISPLAYQ\npress 0 for next operation(stack)"<<endl;
 cin>>chee;
 while(chee!=0)
 {
 switch(chee)
 {
 case 1:
 {
  enque();
 break;
 }
 case 2 :
 {
deque();
 break;
}
 case 3 :
 {  displayq();
 break;
}
default:
cout<<"invalid";
}
cout<<"enter the choice"<<endl;
cin>>chee;
}
}
cout<<"enter the operation choice"<<endl;
cin>>ch;  }
getch();
}
