#include<stdio.h>
#include<stdlib.h>

void reverse();


struct node
{
int data;
struct node *next;
};

struct node *start=NULL;
void main()
{

struct node *current,*new_node;
int choice,num;
printf("enter the data:");
scanf("%d",&num);

while(num!=-1)
{
new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=num;
new_node->next=NULL;
if(start==NULL)
{
start=current=new_node;
}
else
{
current->next=new_node;
current=new_node;
}

printf("enter the data\n");
scanf("%d",&num);

}
current=start;
while(current!=NULL)
{
printf("%d",current->data);
current=current->next;
}
reverse();
}

void reverse()
{
struct node *current,*temp;
struct node *prev=NULL;
current=temp=start;

while(temp!=NULL)
{
temp=temp->next;
current->next=prev;
prev=current;
current=temp;
}
start=prev;


printf("after reversing data\n");
current=start;


while(current!=NULL)
{
printf("%d",current->data);
current=current->next;
}
}
