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
}*temp,*new,*head;
void main()
{
int ch;
do
{
printf("\n operations on singlylinked list\n");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for add the node at beg\n");
printf("enter 4 for add the node at end\n");
printf("enter 5 for add the data at specific pos\n");
printf("enter 6 for del the node beg\n");
printf("enter 7 for delete the node at end\n");
printf("enter  8 for del the node at pos \n");
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
}}
while(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6||ch==7||ch==8);}
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
}
printf("enter 1 for node and 0 for exit:");
scanf("%d",&c);
}}
void display()
{
temp=head;
printf("\nsingly linked list creation\n");
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
}}
void inseratbeg()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=head;
head=new;
display();
}
void insertatend()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=new;
display();
}
void insertatpos()
{
int pos,i=1;
printf("enter the pos\n");
scanf("%d",&pos);
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
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
void delatbeg()
{
temp=head;
head=head->next;
free(temp);
display();
}
void delatend()
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
int pos,i=1;
int count=length();
printf("enter the position");
scanf("%d",&pos);
if(pos>count)
{
printf("invalid");
}
else
{
temp=head;
while(i<pos)
{
prev=temp;
temp=temp->next;
i++;
}
prev=temp;
prev->next=temp->next;
free(temp);
display();
}}
int length()
{
temp=head;
int c=0;
while(temp!=0)
{
temp=temp->next;
c++;
}
return c;
}




