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
struct node *next;
}*temp,*new,*tail,*head;
int main()
{
int ch;
do
{
printf("...operations....");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for insertbeg\n");
printf("enter 4 for insertend\n");
printf("enter 5 for insertpos\n");
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:create(); break;
case 3:insertbeg(); break;
case 4:insertend(); break;
case 5:insertpos(); break;
default:printf("invalid");
}while(ch==1||ch==2||ch==3||ch==4||ch==5);}
void create()
{
int c=1;
head=0;
while(c)
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the item");
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
}
temp->next=head;
}
printf("enter 1 for go 0 for exit");
scanf("%d",&c);}
void display()
{
temp=head;
while(temp->next!=head)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);}
void insertbeg()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&new->data);
new->next=0;
temp=head;
while(temp->next!=head)
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
printf("enter the item");
scanf("%d",&new->data);
new->next=0;
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
new->next=head;
head=new;
temp->next=new;
}
void insertpos()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&new->data);
new->next=0;
temp=head;
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




