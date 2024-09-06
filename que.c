#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int que[100],i,n,choice,frant=-1,rear=-1;
int main()
{
printf("enter the number");
scanf("%d",&n);
printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
while(1)
{
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue(); break;
case 2:dequeue(); break;
case 3:display(); break;
case 4:exit(0);
default:printf("invalid");
}}}
void enqueue()
{
if(rear==n-1)
printf("que is full");
else
frant=-1;
frant=0;
{
printf("enter the item");
scanf("%d",&n);
rear=rear+1;
que[rear]=n;
}}
void dequeue()
{
if(frant==-1)
{
printf("empty");
}
else
{
printf("item deleted from the queue is %d",que[frant]);
frant=frant+1;
}}
void display()
{
if(frant==-1)
{
printf("empty");
}
else
{
for(i=frant;i<=rear;i++)
printf("%d",que[i]);
}}

