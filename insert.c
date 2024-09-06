#include<stdio.h>
#include<stdlib.h>
void beg();
void end();
void pos();
struct node
{
int data;
struct node *next;
}*header,*ptr,*new,*ptr1;
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
header=ptr=new;
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
int item;
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
new->data=item;
if(header==NULL)
{
new->next=NULL;
header=new;
}
else
{
new->next=header;
header=new;
}
ptr=header;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
}
void end()
{
int item;
new=malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
new->data=item;
ptr=header;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
new->next=NULL;
ptr->next=new;
ptr=header;
while(ptr->next!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
}
void pos()
{
int item, pos,i;
printf("enter the position");
scanf("%d",&pos);
new=malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&item);
new->data=item;
if(header==NULL)
{
new->next=NULL;
header=new;
}
ptr=header;
for(i=1;i<pos-1;i++)
{
ptr=ptr->next;
}
new->next=ptr->next;
ptr->next=new;
ptr=header;
while(ptr->next!=NULL)
{
printf("%d  ",ptr->data);
ptr=ptr->next;
}
}























































































































































































































































































































