#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int choice,item;
struct node
{
int data;
struct node *next;
}*front,*rear;
int main()
{
front=0;
rear=0;
printf("choices are\n");
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.display\n");
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
break;
default:printf("invalid\n");}}}
void enqueue()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
newnode->data=item;
newnode->next=0;
if(rear==0)
{
front=newnode;
rear=newnode;
rear->next=front;
}
else
{
rear->next=newnode;
rear=newnode;
rear->next=front;
}
printf("added successfully %d\n",newnode->data);}
void dequeue()
{
struct node *temp;
temp=front;
if(front==0&&rear==0)
{
printf("empty queue\n");
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
printf("queue is empty");
}
else
{
while(temp->next!=front)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}}

