#include<stdio.h>
#include<stdlib.>
void create();
void display();
void insertbeg();
void insertend();
void insertpos();
struct node
{
int data;
struct node *next;
}*temp,*tail,*new,*head;
int main()
{
int ch;
do
{
printf("operations..\n");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for add the node beg\n");
printf("enter 4 for add the node at end\n");
printf("enter 5 for add the node at pos\n");
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:display(); break;
case 3:insertbeg(); break;
case 4:insertend(); break;
case 5:insertpos(); break;
default:printf("invalid");
}}while(ch==1||ch==2||ch==3||ch==4||ch==5);}
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
head=temp=new;
}
else
{
temp->next=new;
temp=new;
tail=new;
temp->next=head;
}
printf("enter 1 for con 0 for exit\n");
scanf("%d",&c);
}}
void display()
{
tail=head;
while(tail!=0)
{
printf("%d",tail->data);
tail=tail->next;
}}
void insertbeg()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
while(temp->next!=0)
{
temp=temp->next;
}
new->next=head;
head=new;
temp->next=head;
}
void insertend()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=new;
new->next=head;
tail=new;
}
void insertpos()
{

new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
int pos,i;
printf("enter the position");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}

new->next=temp->next;
temp->next=new;
}
