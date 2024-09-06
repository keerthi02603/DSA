#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *start=NULL;
struct node *creat(struct node*);
struct node *display(struct node*);
struct node *insert_beg(struct node*);
struct node *insert_mid(struct node*);
struct node *insert_end(struct node*);
struct node *del_beg(struct node*);
struct node *del_mid(struct node*);
struct node *del_end(struct node*);
int main()
{
int choice;
do
{
printf("operations in singly linked list");
printf("1.create a linked list\n");
printf("2.display a linked list\n");
printf("3.insert a node in the biginning of the linked list\n");
printf("4.insert a node in the specified position in a linked list\n");
printf("5.insert a node in the end of the linked list\n");
printf("6.delete the node in the beginning of the linked list\n");
printf("7.delete the node at specified position\n");
printf("8.delete the node at the end of the linked list\n");
printf("9.exit\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:start=creat(start);
printf("singly linked list created\n");
break;
case 2:start=display(start);
printf("display linked list created\n");
break;
case 3:start=insert_beg(start);
printf("node is added at the beginning\n");
break;
case 4:start=insert_mid(start);
printf("node is added at the specified position\n");
break;
case 5:start=insert_end(start);
printf("node is added at the end\n");
break;
case 6:start=del_beg(start);
printf("delete the node at beginning\n");
break;
case 7:start=del_mid(start);
printf("delete the node at the specified position\n");
break;
case 8:start=del_end(start);
printf("delete the node at the end\n");
break;}}
while(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6||choice==7||choice==8);
return 0;
}
struct node *creat(struct node *start){
struct node *new_node,*current;
int num;
printf("enter -1 to create the newnode\n");
printf("enter the data\n");
scanf("%d",&num);
while(num!=-1){
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=num;
if(start==NULL)
{
start=new_node;
new_node->next=NULL;
}
else
{
current=start;
while(current->next!=NULL)
{
current=current->next;
}
current->next=new_node;
new_node->next=NULL;
}
printf("enter the data");
scanf("%d",&num);
}
return start;}
struct node *display(struct node *start){
struct node *current;
current=start;
printf("the list contains\n");
while(current!=NULL){
printf("%d\n",current->data);
current=current->next;}
printf("\n");
return start;}
struct node *insert_beg(struct node *start){
struct node *new_node;
int val;
printf("enter the data which should be added\n");
scanf("%d",&val);
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=val;
new_node->next=start;
start=new_node;
return start;}
struct node *insert_mid(struct node *start){
struct node *new_node,*current;
int val,num;
printf("enter a number after which the new node should be added\n");
scanf("%d",&val);
printf("enter the  data for the new node\n");
scanf("%d",&num);
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=num;
current=start;
while(current->data!=val){
current=current->next;
new_node->next->next;
current->next=new_node;
return start;}}
struct node *insert_end(struct node *start){
struct node *new_node,*current;
int num;
printf("enter the data for new node\n");
scanf("%d",&num);
new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=num;
current=start;
while(current->next!=NULL){
current=current->next;}
current->next=new_node;
new_node->next=NULL;
return start;
}
struct node *del_beg(struct node *start)
{
struct node *current;
current=start;
start=start->next;
free(current);
return start;
}
struct node *del_mid(struct node *start){
struct node *current,*previous;
int num;
printf("enter the number after wich the node should be added\n");
scanf("%d",&num);
current=start;
while(current->data!=num){
previous=current;
current=current->next;
previous->next=current->next;
free(current);
return start;
}}
struct node *del_end(struct node *start){
struct node *current,*previous;
current=start;
while(current->next!=NULL)
{
previous=current;
current=current->next;
}
previous->next!=NULL;
free(current);
return start;
}













