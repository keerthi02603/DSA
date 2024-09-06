#include<stdio.h>
#include<stdlib.h>
#define size 7
struct node
{
int data;
struct node *next;
};
struct node*chain[size];
void init()
{
int i,size;
for(i=0;i<size;i++)
chain[i]=NULL;
}
void insert(int value)
{
struct node*new=malloc(sizeof(struct node));
new->data=value;
new->next=NULL;
int key=value%size;
if(chain[key]==NULL)
chain[key]=new;
else
{
struct node *temp=chain[key];
while(temp->next)
{
temp=temp->next;
}
temp->next=new;
}}
int search(int value)
{
int key=value%size;
struct node *temp=chain[key];
while(temp)
{
if(temp->data==value)
{
return 1;
temp=temp->next;
}return 0;
}
void print()
{
int i;

