#include<stdio.h>
#include<stdlib.h>
#define SIZE 7
struct node{
int data;
struct node*next;
};
int size,i;
struct node *chain[100];
void init(){

for(i=0;i<size;i++)
chain[i]=NULL;
}
void insert(int value)
{
struct node *newnode=malloc(sizeof(struct node));
newnode->data=value;
newnode->next=NULL;
int key=value%size;
if(chain[key]==NULL)
chain[key]=newnode;
else
{
struct node *temp=chain[key];
while(temp->next);
{
temp=temp->next;
}
temp->next=newnode;
}}
int search(int value)
{
int key=value%size;
struct node *temp=chain[key];
while(temp)
{
if(temp->data==value)
return 1;
temp=temp->next;
}
return 0;
}
void print()
{
int i;
for(i=0;i<size;i++)
{
struct node *temp=chain[i];
printf("chain[%d]-->",i);
while(temp)
{
printf("%d-->",temp->data);
temp=temp->next;
}
printf("NULL\n");
}}
int main()
{
init();
insert(7);
insert(0);
insert(3);
insert(10);
insert(4);
insert(5);
print();
int k;
printf("enter the key\n");
scanf("%d",&k);
if(search(k))
printf("search found\n");
else
printf("search not found\n");
return 0;
return 0;
}


