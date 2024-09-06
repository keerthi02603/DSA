#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertend();
void insertpos();

struct node
{
int data;
struct node *prev;
struct node *next;
}*head,*tail,*new,*temp;
void main()
{
int ch;
do
{
printf("opertations doubly linked list\n");
printf("enter 1 for create the data\n");
printf("enter 2 for display the data\n");
printf("enter 3 for insert beg\n");
printf("enter 4 for insert end\n");
printf("enter 5 for insert pos\n");
printf("enter 6 for del beg\n");
printf("enter 7 for del end\n");
printf("enter 8 for del pos\n");
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:display(); break;
case 3:insertbeg(); break;
case 4:insertend(); break;
case 5:insertpos(); break;
/*case 6:delbeg(); break;
case 7:delend(); break;
case 8:delpos(); break;*/
default:printf("invalid");
}}while(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6||ch==7||ch==8);}
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
head=temp=new;
}
else
{
temp->next=new;
new->prev=temp;
temp=new;
}
printf("enter 1 for go 0 for exit\n");
scanf("%d",&c);}}
void display()
{
tail=head;
while(tail!=0)
{
printf("%d\t",tail->data);
tail=tail->next;
}}
void insertbeg()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
head->prev=new;
new->next=head;
head=new;
display();
}
void insertend()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
temp=head;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=new;
new->prev=temp;
temp=new;
display();
}
void insertpos()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
int pos,i=1;
printf("enter the position");
scanf("%d",&pos);




