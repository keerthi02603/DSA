#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
int main()
{
int n,choice;
printf("enter the number");
scanf("%d",&n);
printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
while(1)
{
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue(); break;
case 2:dequeue(); break;
case 3:display(); break;
case 4:exit(0);
default:printf("invalid");
}}}
struct node 
{
int data;
struct node *next;
}*frant,*rear,*temp,*new;
void enqueue()
{
new=malloc(sizeof(struct node));
printf("enter the item");
scanf("%d",&new->data);
new->next=0;
if(frant==0&&rear==0)
{
frant=rear=new;
}
else
{
rear->next=new;
rear=new;
}}
void dequeue()
{
temp=frant;
if(frant==0&&rear==0)
{
printf("empty");
}
else
{
printf("%d",frant->data);
frant=frant->next;
free(temp);

}}
void display()
{
if(frant==0&&rear==0)
{
printf("empty");
}
else
{
temp=frant;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}}}



