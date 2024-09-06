#include<stdio.h>
#include<stdlib.h>
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
struct node *reverse(struct node*start);
struct node *delete_middle(struct node *start);


struct node
{
int data;
struct node *next;
};

int main()
{
int choice;

do
{
printf("operations on singly linked list\n");
printf("1.enter 1 to create a data\n");
printf("2.enter 2 to display a data\n");
printf("3.enter 3 to insert at beg\n");
printf("4.enter 4 to insert at end\n");
printf("5.enter 5 to insert at pos\n");
printf("6.enter 6 to delete at beg\n");
printf("7.enter 7 to delete at end\n");
printf("8.enter 8 to delete at pos\n");
printf("9.enter 9 for searching val\n");
printf("10.enter 10 to reverse the data\n");
printf("11.enter 11 to delete middle element\n");
printf("12.enter 12 to exit\n");
printf("enter the choice\n");
scanf("%d",&choice);

switch(choice)
{
case 1:start=create(start);
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
case 10:start=reverse(start);
break;
case 11:start=delete_middle(start);
break;
default:
printf("invalid");
}
}while(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6||choice==7||choice==8||choice==9||choice==10||choice==11);
}
struct node *create(struct node *start)
{
struct node *new_node,*temp;
int num;
printf("enter the data");
scanf("%d",&num);

while(num!=-1)
{
new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=num;
new_node->next=NULL;
if(start=NULL)
{
start=temp=new_node;


}
else
{
temp->next=new_node;
new_node->next=NULL;
temp=new_node;

}
printf("enter the data");
scanf("%d",&num);
}
return start;
}

struct node *display(struct node *start)
{
struct node *temp;
if(start==NULL)
{
printf("empty\n");
}
else
{
temp=start;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
return start;
}

struct node *insert_at_beg(struct node *start)
{
struct node *new_node;
int num;
printf("enter the element to insert\n");
scanf("%d",&num);
new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=num;
new_node->next=start;
start=new_node;

return start;
}

struct node *insert_at_end(struct node *start)
{
struct node *new_node,*temp;
int num;
printf("enter the element to insert at end");
scanf("%d",&num);
new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=num;
new_node->next=NULL;
temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=new_node;
return start;
}

struct node *insert_at_pos(struct node *start)
{
struct node *new_node,*temp,*prev;
int num,pos;
printf("enter the value to insert\n");
scanf("%d",&pos);
printf("enter the element to insert\n");
scanf("%d",&num);
new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=num;
new_node->next=NULL;
temp=start;
while(temp->data!=pos)
{

temp=temp->next;
}

new_node->next=temp->next;
temp->next=new_node;
return start;
}

struct node *delete_at_beg(struct node *start)
{
struct node *temp,*prev;
temp=prev=start;
temp=temp->next;
start=prev->next;
free(prev);

return start;
}

struct node *delete_at_end(struct node *start)
{
struct node *prev,*temp;
temp=prev=start;
while(temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
prev->next=NULL;
free(temp);
return start;
}

struct node *delete_at_pos(struct node *start)
{
struct node *temp,*prev;
int val;
printf("enter the val to delete:");
scanf("%d",&val);

temp=temp->next;
while(temp->data!=val)
{
prev=temp;
temp=temp->next;
}

prev->next=temp->next;
free(temp);
return start;
}

struct node *search_at_pos(struct node *start)
{
struct node *temp;
int i=1,val;
printf("enter the val to find pos:");
scanf("%d",&val);
temp=start;
while(temp->data!=val)
{
i++;
temp=temp->next;
}
printf("value is at %d position\n",i);
return start;
}

struct node *reverse(struct node *start)
{
struct node *temp,*current;
struct node *prev=NULL;
temp=current=start;
while(current!=NULL)
{
temp=temp->next;
current->next=prev;
prev=current;
current=temp;
}
start=prev;
return start;
}

struct node *delete_middle(struct node *start)
{
struct node *prev,*temp;
int i=1;
temp=start;
while(temp!=NULL)
{
i++;
}
for(int j=0;j<=i/2;j++)
{
prev=temp;
temp=temp->next;
}
prev->next=temp->next;
free(temp);
return start;
}

