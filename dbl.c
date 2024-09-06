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
struct node *prev;
struct node *next;
}*head,*tail,*new,*temp;
void main()
{
int ch;
do
{
printf("\n\n opetations\n\n");
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for add beg\n");
printf("enter 4 for add end\n");
printf("enter 5 for add at pos\n");
printf("enter 6 for del beg\n");
printf("enter 7 for del the node at end\n");
printf("enter 8 for del the node at pos\n");
printf("enter the choice:\n");
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
//temp->next=new;
//new->prev=temp;
new->next=temp;
temp->prev=new;
temp=new;
}printf("enter 1 for go and 0 for exit\n");
scanf("%d",&c);
}}
void display()
{
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}}
void insertbeg()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
temp->prev=new;
new->next=temp;
head=new;
display();
}
void insertend()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
while(temp->next!=0)
{
temp=temp->next;
}
//temp->next=new;
new->prev=temp;
temp->next=new;
temp=new;
display();}
void insertpos()
{
temp=head;
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->prev=0;
new->next=0;
int pos,i;
printf("enter the position");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
new->next=temp->next;
new->prev=temp;
temp->next=new;
display();
}
void delbeg()
{
temp=head;
head=head->next;
head->prev=0;
free(temp);
display();
}
void delend()
{
temp=head;
while(temp->next!=0)
{
temp=temp->next;
}
temp->prev->next=0;
temp=temp->next;
free(temp);
display();
}
void delpos()
{
temp=head;

temp=head;
int pos,i=1;
printf("\n enter the position\n");
scanf("%d",&pos);
while(i<pos)
{
temp=temp->next;
i++;
}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
}

