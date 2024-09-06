#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};

struct node *start=NULL;
struct node *create(struct node *start);
struct node *display(struct node *start);
struct node *insert_at_beg(struct node *start);
struct node *insert_at_end(struct node *start);
struct node *insert_at_pos(struct node *start);
struct node *delete_at_beg(struct node *start);
struct node *delete_at_end(struct node *start);
struct node *delete_at_pos(struct node *start);
struct node *search_at_pos(struct node *start);
int main()
{
int choice;
do
{
printf("\n operations on circular linked list\n");
printf("1.create list\n");
printf("2.display the list\n");
printf("3.insert to beg\n");
printf("4.insert to end\n");
printf("5.insert to pos\n");
printf("6.delete to beg\n");
printf("7.delete to end\n");
printf("8.delete to pos\n");
printf("9.search for position\n");
printf("10.exit the list\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:start=create(start);
printf("\n circular linked list created");
break;
case 2:start=display(start);
break;
case 3:start=insert_at_beg(start);
break;
case 4:start=insert_at_end(start);
break;
case 5:start=insert_at_pos(start);
break;
case 6:start=delete_at_beg(start);
break;
case 7:start=delete_at_end(start);
break;
case 8:start=delete_at_pos(start);
break;
case 9:start=search_at_pos(start);
break;
default:
printf("exited\n");
}
}while(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6||choice==7||choice==8||choice==9);
return 0;
}
struct node *create(struct node *start)
{
struct node *temp,*newnode;
int num;
printf("enter -1 to stop the link\n\n");
printf("enter the data");
scanf("%d",&num);
while(num!=-1)
{
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=num;
if(start==NULL)
{
temp=start=newnode;

}else{
temp->next=newnode;
temp=newnode;
}
temp->next=start;
printf("entert the data");
scanf("%d",&num);
}
return start;
}
struct node *display(struct node *start)
{
struct node *current;
current=start;
printf("entered the data is ");
while(current->next!=start)
{
printf("%d\t",current->data);
current=current->next;
}
printf("%d\n",current->data);
return start;

}

struct node *insert_at_beg(struct node *start)
{
struct node *newnode,*current;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
current=start;
while(current->next!=start)
{
current=current->next;
}
current->next=newnode;
newnode->next=start;
start=newnode;
return start;
}

struct node *insert_at_end(struct node *start)
{
struct node *newnode,*current;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
current=start;
while(current->next!=start);
{
current=current->next;
}
current->next=newnode;
newnode->next=start;
return start;
}

struct node *insert_at_pos(struct node *start)
{
struct node *current,*newnode;
int num;
printf("enter the number to insert\n");
scanf("%d",&num);
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=num;
newnode->next=NULL;
current=start;
while(current->data!=num)
{
current=current->next;
}
newnode->next=current->next;
current->next=newnode;

return start;
}

struct node *delete_at_beg(struct node *start)
{
struct node *current,*prev;
current=prev=start;
while(current->next!=start)
{
current=current->next;
}
current->next=start->next;
start=current->next;
free(prev);
return start;
}
struct node *delete_at_end(struct node *start)
{
struct node *current,*prev;
current=prev=start;
while(current->next!=start)
{
prev=current;
current=current->next;
}
prev->next=current->next;
free(current);
return start;
}

struct node *delete_at_pos(struct node *start)
{
struct node *current ,*prev;
int num;
printf("enter the value");
scanf("%d",&num);
current=prev=start;
while(current->data!=num)
{
prev=current;
current=current->next;
}
prev->next=current->next;
free(current);
return start;
}
struct node *search_at_pos(struct node *start)
{
struct node *current;
int num,i=1;
printf("enter the number to search");
scanf("%d",&num);
current=start;
while(current->data!=num)
{
i++;
current=current->next;
}
printf("position of the data is%d\n",i);
return start;
}

















