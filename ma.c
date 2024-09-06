/*#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int item,ch;
struct node
{
int data;
struct node *next;
}*front,*rear;
int main()
{
front=0;
rear=0;
printf("choices is\n");
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");
while(1)
{
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue(); break;
case 2:dequeue(); break;
case 3:display(); break;
case 4:exit(0); break;
default:printf("invalid");
}}}
void enqueue()
{
struct node *new;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&item);
if(rear==0)
{
front=new;
rear=new;
rear->next=front;
}
else
{
rear->next=new;
rear=new;
rear->next=front;
}
printf("add the data %d",new->data);
}
void dequeue()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("empty");
}
else if(front==rear)
{
front=0;
rear=0;
free(temp);
}
else
{
front=front->next;
rear->next=front;
free(temp);
}}
void display()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("empty queue\n");
}
else
{
while(temp->next!=front)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}}*/



