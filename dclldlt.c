#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void deletebeg();
void deleteend();
void deletepos();

int pos,i,n,data;

struct node
{
int data;
struct node *next;
struct node *prev;
}*head=0,*ptr,*ptr1,*ptr2,*newnode,*tail;

void main()
{
head=0;
int  choice,ch;
printf("\n 1.create\n 2.display\n 3.deletebeg\n 4.deleteend\n 5.deletepos\n");
while(ch!=6)
{
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:create();
break;
case 2:display();
break;
case 3:deletebeg();
break;
case 4:deleteend();
break;
case 5:deletepos();
break;
case 6:printf("exit\n");
break;
default:printf("inavalid choice");
}}
}

void create()
{
int choice;
head=NULL;
while(choice)
{
newnode=malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
newnode->prev=NULL;
if(head==NULL)
{
head=tail=newnode;
head->next=head;
head->prev=head;
}
else
{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
head->prev=newnode;
tail=newnode;
}
printf("do you want to continue (0,1) ?");
scanf("%d",&choice);
}}

void display()
{
ptr=head;
while(ptr!=tail)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
printf("%d",ptr->data);
}

void deletebeg()
{
ptr=head;
if(head==NULL)
{
printf("empty\n");
}
else if(head->next==head)
{
head=tail=NULL;
free(ptr);
}
else
{
head=head->next;
head->prev=tail;
tail->next=head;
printf("deleted the element if %d",ptr->data);
free(ptr);}}



void deleteend()
{
ptr=tail;
if(head==NULL)
{
printf("empty");
}
else if(head->next==head)
{
head=tail=NULL;
free(ptr);}
else
{
tail=tail->prev;
tail->next=head;
head->prev=tail;
printf("delete the element if %d",ptr->data);
free(ptr);
}
}

void deletepos()
{
ptr=head;
ptr=tail->next;
printf("enter the position");
scanf("%d",&pos);
if(pos==1)
{
deletebeg();
}
else
{
while(i<pos)
{
ptr=ptr->next;
i++;
}
ptr->prev->next=ptr->next;
ptr->next->prev=ptr->prev;
if(ptr->next==head)
{
tail=ptr->prev;
free(ptr);}
else
{
printf("deleted element is %d",ptr->data);
free(ptr);
}
}
}

