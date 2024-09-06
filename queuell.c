#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void delete();
void display();
void main()
{
int choice;
while(1)
{
printf("1.insert an element\n,2.delete an element\n,3.display an element\n,4.exit\n");
printf("enter the choice;");
scanf("%d",&choice);
switch(choice)
{
case 1: insert();
break;
case 2:delete();
break;
case 3: display();
break;
case 4:exit(0);
break;
default:printf("invalid");
}}}
void insert()
{
struct node *newnode;
int item;
newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("overflow\n");
return;
}
else
{
 printf("enter value\n");
 scanf("%d",&item);
 newnode->data=item;
 if(front==NULL)
 {
 front=newnode;
rear=newnode;
front->next=NULL;
rear->next=NULL;
}
else
{
rear->next=newnode;
rear=newnode;
rear->next=NULL;
}
}
}
void delete()
{
struct node *temp;
if(front==NULL)
{
printf("underflow\n");
return;
}
else
{
temp=front;
front=front->next;
free(temp);
}
}
void display()
{
struct node *temp;
temp=front;
if(front==NULL)
{
printf("empty\n");
}
else
{
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}
