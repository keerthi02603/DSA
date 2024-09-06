#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertend();
void insertpos();
void delbeg();
void delend();
void delpos();
struct node
{
int data;
struct node *next;
}*new,*head,*temp;
void main()
{
int ch;
do
{
printf(".....operations.....");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for insertbeg\n");
printf("enter 4 for insertend\n");
printf("enter 5 for insertpos\n");
printf("enter 6 for delbeg\n");
printf("enter 7 for delend\n");
printf("enter 8 for delpos\n");
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:create(); break;
case 2:display(); break;
case 3:insertbeg(); break;
case 4:insertend(); break;
case 5:insertpos(); break;
case 6:delbeg(); break;
case 7:delend(); break;
case 8:delpos(); break;
default:printf("invalid\n");
}}while(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6||ch==7||ch==8);}
void create()
{
int c=1;
head=0;
while(c)
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data:");
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
}printf("enter 1 for goo..0 for exit");
scanf("%d",&c);}}
void display()
{
temp=head;
while(temp!=0)
{
printf("%d\t",temp->data);
temp=temp->next;
}}
void insertbeg()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data:");
scanf("%d",&new->data);
new->next=0;
new->next=head;
head=new;
display();
}
void insertend()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data:");
scanf("%d",&new->data);
new->next=0;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=new;
display();
}
void insertpos()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data:");
scanf("%d",&new->data);
int pos,i;
printf("enter the position\n");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
new->next=temp->next;
temp->next=new;
}
void delbeg()
{
temp=head;
head=head->next;
free(temp);
display();
}
void delend()
{
struct node *prev;
temp=head;
while(temp->next!=0)
{
prev=temp;
temp=temp->next;
}
prev->next=0;
display();
}
void delpos()
{
struct node *prev;
temp=head;
int pos,i;
for(i=1;i<pos-1;i++)
{
prev=temp;
temp=temp->next;
}
//prev=temp->next;
temp->next=prev->next;
prev=temp->next;
free(prev);
}
