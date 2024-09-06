#include<stdio.h>
#include<stdlib.h>
int que[100],i,n,choice,frant=-1,rear=-1; 
void enqueue();
void dequeue();
void display();
int main()
{
printf("enter the number\n");
scanf("%d",&n);
printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
while(1)
{
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("invalid");
}}}
void enqueue()
{
int x;
printf("enter the number");
scanf("%d",&x);
if((rear+1)%n==frant)
{
printf("que is full\n");
}
else if(frant==-1&&rear==-1)
{
frant=0;
(rear+1)%n=0;
que[rear]=n;
}
else
{
rear=(rear+1)%n;
que[rear]=n;
}
}
void dequeue()
{
if(frant==-1&&rear==-1)
{
printf("empty list");
}
else if(frant==rear)
{
frant=-1;
rear=-1;
}
else
{
printf("deleted is %d",que[frant]);
frant=(frant+1)%n;
}
}
void display()
{
if(frant==-1&&rear==-1)
{
printf("empty list\n");
}
for(i=frant;i<=rear;i++)
{
printf("%d",que[i]);
}
}
