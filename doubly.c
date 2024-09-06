#include<stdio.h>//doubly linked list insertion
#include<stdlib.h>
void beg();
void end();
void pos();
struct node
{
int data;
struct node *next;
struct node *prev;
}*header,*new,*ptr;
void main()
{
int choice,ch;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new->data);
new->next=NULL;
if(header==NULL)
{
ptr->next=new;
}
else
{
ptr->next=new;
ptr=new;
}
printf("do you want to continue\n");
scanf("%d",&choice);
}
ptr=header;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
while(ch!=4)
{
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:beg();
break;
case 2:end();
break;
case 3:pos();
break;
case 4:printf("enter exit\n");
break;
default:printf("invalid");
}
}
}
void beg()
{
new=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new->data);
ptr=header;
new->next=ptr;
new->prev=NULL;
}
void end()
{
new=(struct node*)malloc(sizeof(struct node));
ptr=header;
while(ptr->next!=NULL)
{
new->next!=NULL;
new->prev=ptr;
ptr->next=new;
}}
void pos()
{
int pos,i;
printf("enter the position");
scanf("%d",&pos);
ptr=header;
for( i=1;i<pos-1;i++)
{
ptr=ptr->next;
}
if(ptr->next==NULL)
{
ptr=header;
new->next=ptr;
ptr->prev=new;
new->prev=NULL;
header=new;
}
}
