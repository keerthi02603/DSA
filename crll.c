#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertend();
void insertpos();
//void insertbeg();
void delbeg();
void delend();
void delpos();
int length();
struct node
{
int data;
struct node *next;
}*tail,*head,*temp,*new,*tail,*prev;
int main()
{
int ch;
do
{
printf("enter 1 for create\n");
printf("enter 2 for display\n");
printf("enter 3 for add begin\n");
printf("enter 4 for add end\n");
printf("enter 5 for add the data pos\n");
printf("enter 6 for del the node at beg\n");
printf("enter 7 for del end\n");
printf("enter 8 for del position\n");
printf("enter 9 for exit\n");
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
case 9:printf("exit\n");break;
default:printf("invalid");
}}while(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6||ch==7||ch==8||ch==9);}
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
}
temp->next=head;
printf("enter 1 for go 0 for exit\n");
scanf("%d",&c);
}}
void display()
{
temp=head;
while(temp->next!=head)
{
printf("%d\n",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}
void insertbeg()
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
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
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=new;
new->next=head;
tail=new;
}
void insertpos()
{
int i=1,pos;
printf("enter the position");
scanf("%d",&pos);
new=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&new->data);
new->next=0;
temp=head;
while(i<pos-1)
{
temp=temp->next;
i++;
}
new->next=temp->next;
temp->next=new;
}
void delbeg()
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
display();
}
void delend()
{
temp=head;
while(temp->next!=head)
{
prev=temp;
temp=temp->next;
}
prev->next=head;
free(temp);
display();
}
void delpos()
{
temp=head;
int pos;
printf("enter the position");
scanf("%d",&pos);
int i=1;
while(i<pos)
{
prev=temp;
temp=temp->next;
i++;
}
prev->next=temp->next;
free(temp);
display();
}
/*int length()
{
temp=head;
int c=1;
while(temp->next!=head)
{
temp=temp->next;
c++;
}
return c;
}*/



























