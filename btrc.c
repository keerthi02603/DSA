#include<stdio.h>
#include<stdlib.h>
struct node *create();
struct node
{
int data;
struct node *left,*right;
}*root=0;
int main()
{
root=create( );
}
struct node *create()
{
int i;
struct node *new=(struct node*)malloc(sizeof(struct node));
new->left=0;
new->right=0;
printf("enter the data(for -1 no node:)");
scanf("%d",&i);
if(i==-1)
{
return 0;
}
new->data=i;
printf("enter the data for left child of %d\n",i);
new->left=create();
printf("enter the data for right child of %d\n",i);
new->right=create();
return new;

}






