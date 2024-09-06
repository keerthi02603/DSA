#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node*next;
};
struct node *head;
void main()
{
int choice;
while(1)
{
printf("1.push\n2.pop\n3.display\n4.exit");
printf("enter your choice\n");
scanf("%d",&choice);;
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("invalid");
}
}
}
void push()
{
int data;
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("not able to push element");
}
else
{
printf("enter value");
scanf("%d",&data);
if(head==NULL)
{
newnode->data=data;
newnode->next=NULL;
head=newnode;
}
else
{
newnode->data=data;
newnode->next=head;
head=newnode;
}
printf("item pushed");
}
}
void pop()
{
int item;
struct node *temp;
if(head==NULL)
{
printf("underflow");
}
else
{
item=head->data;
temp=head;
head=head->next;
free(temp);
printf("item popped");
}}
void display()
{
int i;
struct node *temp;
temp=head;
if(temp==NULL)
{
printf("stack is empty");
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

