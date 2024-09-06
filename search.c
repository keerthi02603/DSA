#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
int main()
{
struct node *start=0;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *search(struct node *);
start=create(start);
start=display(start);
start=search(start);
}
struct node *create(struct node *start)
{
struct node *new,*current;
int num;
printf("enter -1 to stop operating more node\n");
printf("enter the data\n");
scanf("%d",&num);
while(num!=-1)
{
new=(struct node *)malloc(sizeof(struct node));
new->data=num;
if(start==0)
{
new->next=0;
start=new;
}
else
{
current=start;
while(current->next!=0)
current=current->next;
current->next=new;
new->next=0;
}
printf("enter the data");
scanf("%d",&num);
}
return start;
}
struct node *display(struct node *start)
{
struct node *current;
current=start;
printf("now the linked list\n");
while(current!=0)
{
printf("%d\t",current->data);
current=current->next;
}
printf("\n");
return start;
}
struct node *search(struct node *start)
{
struct node *current;
int search,count=0,flag;
printf("enter the search element\n");
scanf("%d",&search);
current=start;
while(current!=0)
{
if(current->data==search)
{
flag=1;
}
current=current->next;
}
if(flag==1)
printf("searching element if found %d",search);
else
printf("%d element is not found",search);
return start;
}

