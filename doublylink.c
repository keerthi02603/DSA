#include<stdio.h>//doubly linked list insertion and deletion
#include<stdlib.h>
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
}
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
}
printf("%d",temp->data);
return start;

}
struct node *insertatbeg(struct node *start)
{
struct node *newnode;
int num;

printf("insert the data at beg");
scanf("%d",&num);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->prev=NULL;
newnode->next=NULL;
newnode->next=start;
start->prev=newnode;
return start;
}
struct node *insertatend(struct node *start)
{
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the  data at end");
scanf("%d",&newnode->data);
temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
newnode->next=NULL;
newnode->prev=temp;
newnode->next=newnode;
return start;
}
struct node *insertatpos(struct node *start)
{
struct node *newnode,*temp;
int val,num;

temp=start;
while(temp->data!=val)
{
temp=temp->next;
}
temp->next->prev=newnode;
newnode->next=temp->next;
newnode->next=newnode;
return start;
}
struct node *deleteatbeg(struct node *start)
{
struct node *temp;
temp=start;
start=temp->next;
temp->next->prev=NULL;
free(temp);
return start;
}
struct node *deleteatend(struct node *start)
{
struct node *temp,*prev;
temp=start;
while(temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
prev->next!=NULL;
temp->prev=NULL;
free(temp);
return start;
}
struct node *deleteatpos(struct node *start)
{
struct node *temp,*current;
int val;
printf("enter which position u will delete");
scanf("%d",&val);
temp=start;
while(temp->data!=val)
{
current=temp;
temp=temp->next;
}
temp->next->prev=current;
current->next=temp->next;
free(temp);
return start;
}
struct node *searchatpos(struct node *start)
{
struct node *current;
int num,i=1;
printf("enter the data");
scanf("%d",&num);
current=start;
while(current->data!=num)
{
current=current->next;
i++;
}
printf("position of the %d num is %d\n",num,i);
}



















