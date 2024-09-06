#include<stdio.h>
#include<stdlib.h>
struct node
{ 
int data;
struct node *left;
struct node *right;
}*root=0;
struct node *create()
{
int d;
struct node *new=(struct node *)malloc(sizeof(struct node));
new->left=0;
new->right=0;
printf("enter the data(for -1 no node:)");
scanf("%d",&d);
if(d==-1)
return 0;
new->data=d;
printf("enter the left child %d",d);
new->left=create();
printf("enter the right child %d",d);
new->right=create();
return new;
}
void preorder(struct node * root)
{
if(root==NULL)
return;
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}
void inorder(struct node *root)
{
if(root==NULL)
return;
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}
void postorder(struct node * root)
{
if(root==NULL)
return;
postorder(root->left);
postorder(root->right);
printf("%d",root->data);
}
int main()
{
 struct node *root= create();

if(root==0)
return 0;

printf("preorder root:");
preorder(root);
printf("\n");
printf("inorder root:");
inorder(root);
printf("\n");
printf("postorder root:");
postorder(root);
printf("\n");
}


