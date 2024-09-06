#include<stdio.h>//doubly linked list insertion and deletion
#include<stdlib.h>
#include<string.h>
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *start=NULL;
struct node *create(struct node *start);
struct node *display(struct node *start);
struct node *insertatbeg(struct node *start);
struct node *insertatend(struct node *start);
struct node *insertatpos(struct node *start);
struct node *deleteatbeg(struct node *start);
struct node *deleteatend(struct node *start);
struct node *deleteatpos(struct node *start);
struct node *searchatpos(struct node *start);
int main()
{
int choice;
do
{
printf("operations on doubly linked list\n");
printf("1.create list\n");
printf("2.display list\n");
printf("3.insert to beg\n");
printf("4.insert to end\n");
printf("5.insert to pos\n");
printf("6.delete to beg\n");
printf("7.delete to end\n");
printf("8.delete to pos\n");
printf("9.search the pos\n");
printf("10.exit the list\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:start=create(start);
printf("doubly linked list created\n");
break;
case 2:start=display(start);
break;
case 3:start=insertatbeg(start);
break;
case 4:start=insertatend(start);
break;
case 5:start=insertatpos(start);
break;
case 6:start=deleteatbeg(start);
break;
case 7:start=deleteatend(start);
break;
case 8:start=deleteatpos(start);
break;
case 9:start=searchatpos(start);
default:
printf("exited\n");

}while(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6||choice==7||choice==8||choice==9);
return 0;
}
struct node *create(struct node *start)
{
struct node *newnode,*temp;
int num;



printf("enter the -1 to stop the data");
printf("enter the data");
scanf("%d",&num);
while(num!=-1)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
if(start==NULL)
{
temp=start=newnode;
}
else{
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
}
printf("enter the data");
scanf("%d",&num);
}
return start;
}
struct node *display(struct node *start)
{
struct node *temp;
temp=start;
while(temp->next!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;

printf("%d",temp->data);
return start;

}
struct node *insertatbeg(struct node *start)
{
struct node *newnode,*tail;
int data;

printf("insert the data at beg");
scanf("%d",&data);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->next=0;
if(tail==0)
{
tail=newnode;
tail->next=newnode;
}
else
{
newnode->next=tail->next;
tail->next=newnode;
return start;
}}
struct node *insertatend(struct node *start)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the  data at end");
scanf("%d",&data);
newnode->next!=NULL;
if(tail==NULL)
{
tail=newnode;
tail->next=newnode;
}
else
{
newnode->next=tail->next;
tail->next=newnode;
tail=newnode;
return start;
}
}
struct node *inseratpos(struct node *start)
{
struct  node *newnode ,*temp,*tail;
int pos,i=1,l;
printf("enter the position");
scanf("%d",&pos);
l=getlength()
{
if(pos<0||pos>l)
{
printf("invalid");
else if(pos==1)
{
printf("insert at beginning");
}
newnode=malloc(sizeof(structnode));
printf("enter the data");
scanf("%d",&newnode->data);
temp=tail->next;
while(i<pos-1)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;
}
																											





