/*doubly linked list reverse*/
/*#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node 
{
int data;
struct node *prev;
struct node *next;
}*tail,*new,*temp,*head;
void main()
{
int ch;
do
{
printf("......operations.....");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:display(); break;
case 3:exit(0); break;
default:printf("invalid\n");
}}while(ch==1||ch==2);}
void create()
{
int c=1;
head=0;
while(c)
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
if(head==0)
{
temp=head=new;
}
else
{
temp->next=new;
new->prev=temp;
temp=new;
}printf("enter 1 for go and 0 for continue\n");
scanf("%d",&c);}}
void display()
{
temp=head;
if(head==NULL)
printf("the list is empty:");
else
{
printf("the elements in forward order:");
while(temp!=NULL)
{
printf("%d",temp->data);
if(temp->next==NULL)
{
break;
}
temp=temp->next;
}
printf("....the elements in reverse order......\n");
while(temp!=head)
{
if(temp->next==NULL)
printf("%d",temp->data);
else
printf("%d",temp->data);
temp=temp->prev;
}
printf("%d",temp->data);
}}*/

#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void reverse();
struct node
{
int data;
struct node *next;
}*head,*temp,*new;
void main()
{
int ch;
do
{
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for reverse\n");
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:display(); break;
case 3:reverse(); break;
case 4:exit(0); break;
default:printf("invalid");
}}while(ch==1||ch==2||ch==3||ch==4);}
void create()
{
int c=1;
head=0;
while(c)
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
if(head==0)
{
temp=head=new;
}
else
{
temp->next=new;
temp=new;
}}










