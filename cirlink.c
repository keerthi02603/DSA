#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertend();
void insertpos();
void deletbeg();
void deletend();
void deletpos();
struct node
{
int data;
struct node*next;
}*head=0,*temp,*newnode,*tail=0,*prev,*ptr;
void main()
{
int ch;
do
{
printf("1.ctreate\n 2.display\n 3.insertbeg\n 4.insertend\n 5.insertpos\n 6.deletbeg\n 7.deletend\n 8.deletpos\n");
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:create();break;
case 2:display();break;
case 3:insertbeg();break;
case 4:insertend();break;
case 5:insertpos();break;
case 6:deletbeg();break;
case 7:deletend();break;
case 8:deletpos();break;
}
}while(ch!=4);
}
void create()
{
newnode=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
head=temp=newnode;
newnode->next=head;
}
else
{
temp->next=newnode;
newnode->next=head;
temp=newnode;
}
}
void display()
{
temp=head;
while(temp->next!=head)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}
void insertbeg()
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
newnode->next=head;
head=newnode;
temp->next=head;
}
/*void insertend()
{
struct node*tail;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=newnode;
newnode->next=head;
tail=newnode;
}*/
void insertpos()
{
int pos;
newnode=malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=0;
printf("enter the position\n");
scanf("%d",&pos);
int i=1;
temp=head;
while(i<pos-1)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;
}
void deletbeg()
{
temp=head;
tail=head;
while(tail->next!=head)
{
tail=tail->next;
}
head=head->next;
tail->next=head;
free(temp);
}
void insertend()
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=0;
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=newnode;
newnode->next=head;
}
void deletend()
{
temp=head;
while(temp->next!=head)
{
prev=temp;
temp=temp->next;
}
prev->next=head;
free(temp);
}
void deletpos()
{
int pos,i;
printf("enter the position\n");
scanf("%d",&pos);
temp=head;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
ptr=temp->next;
temp->next=ptr->next;
free(ptr);
}
