#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int main()
{
int n,choice;
printf("enter the number\n");
scanf("%d",&n);
printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
while(1)
{
printf("\nenter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("invalid");
}}}
struct node
{
int data;
struct node *next;
}*new,*temp,*top=NULL;
void push()
{
new=malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&new->data);
if(top==n-1)
{
printf("full of the queue:");
}
else
{
new->next=top;
top=new;
}}
void pop()
{
if(top==NULL)
{
printf("empty");
}
else
{
printf("deleted item is:");
temp=top;
temp=temp->next;
free(temp);
}
}
void display()
{
if(top==NULL)
{
printf("empty");
}
else
{
temp=top;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
}
