#include<stdio.h>
#include<stdlib.h>
void beg();
void end();
void pos();
struct node
{
int data;
struct node *next;
}*head,*ptr,*ptr1,*new;
void main()
{
int choice,ch;
while(choice)
{
new=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new->data);
new->next=NULL;
if(head==NULL)
{
head=ptr=new;
}
else
{
ptr->next=new;
ptr=new;
}
printf("enter the choice continue to\n");
scanf("%d",&choice);
}
ptr=head;
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
printf("enter the item");
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
if(head==NULL)
{
printf("empty");
}
else
{
ptr=head;
head=head->next;
free(ptr);
}
ptr=head;
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
printf("enter the item");
scanf("%d",&item);
new->data=item;
ptr=head;
while(ptr->next!=NULL)
{
ptr1=ptr;
ptr=ptr->next;
}
ptr1->next=NULL;
free(ptr);
ptr=head;
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
}
void pos()
{
int item,pos,i;
printf("enter the position:");
scanf("%d",&pos);
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&item);
new->data=item;
if(head==NULL)
{
new->next=NULL;
head=new;
}
ptr=head;
for(i=0;i<pos-1;i++)
{
ptr=ptr->next;
}
ptr1=ptr->next;
ptr->next=ptr1->next;
free(ptr1);
ptr=head;
while(ptr!=0)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
}

