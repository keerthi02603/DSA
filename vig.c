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
int length();
struct node
{
int data;
struct node *next;
}*new,*temp,*head;
void main()
{
int ch;
do
{
printf("\noperations of singlylinkedlist\n");
printf("enter 1 for create the node\n ");
printf("enter 2 for display the node\n ");
printf("enter 3 for add beg node\n ");
printf("enter 4 for add end node\n ");
printf("enter 5 for add pos node\n ");
printf("enter 6 for del beg node\n");
printf("enter 7 for del end node\n");
printf("enter 8 for del pos node\n");
printf("\nenter the choice\n");
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
default:printf("invalid");
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
head=temp=new;
}
else
{
temp->next=new;
temp=new;
}
printf("enter 1 for continue 0 for exit");
scanf("%d",&c);
}}
void display()
{
temp=head;
printf(" operations on singly linked list\n");
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
}}
void insertbeg()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=head;
head=new;
display();
}
void insertend()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=new;
display();
}
void insertpos()
{

new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
int pos,i=1;
printf("enter the position");
scanf("%d",&pos);
temp=head;
while(i<pos-1)
{
temp=temp->next;
i++;
}
new->next=temp->next;
temp->next=new;
display();
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
int pos;
int count=length();
printf("enter the position");
scanf("%d",&pos);
if(pos>count)
{
printf("invalid");
}
else
{
int i=1;
temp=head;

while(i<pos)
{
prev=temp;
temp=temp->next;
i++;
}
prev=temp->next;
temp->next=prev->next;
free(prev);
display();
}}
int length()
{
int c=0;
temp=head;
while(temp!=0)
{
temp=temp->next;
c++;
}
return c;
}














