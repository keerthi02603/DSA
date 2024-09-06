#include<stdio.h>
#include<stdlib.h>
struct node
{
int key;
struct node *left;
struct node *right;
}*root=NULL,*temp,*new;
struct node *create(int key)
{
new=(struct node *)malloc(sizeof(struct node));
new->key=key;
new->left=new->right=NULL;
return new;
}
struct node *insert(struct node *root,int key)
{
if(root==NULL)
{
return create(key);
}
else if(key<root->key)
{
root->left=insert(root->left,key);
}
else if(key>root->key)
{
root->right=insert(root->right,key);
}
return root;
}
struct node *delete(struct node *root,int key)
{
if(root==NULL)
{
return root;
}
else if(key<root->key)
{
root->left=delete(root->left,key);
}
else if(key>root->key)
{
root->right=delete(root->right,key);
}
else
{
if(root->left==NULL)
{
temp=root->right;
free(root);
return temp;
}
else if(root->right==NULL)
{
temp=root->right;
free(root);
return root;
}
}}
struct node *search(struct node *root,int key)
{
if(root==0||root->key==key)
{
return root;
}
else if(key<root->key)
{
return search(root->left,key);
}
return search(root->right,key);
}
void inorder(struct node *root)
{
if(root!=0)
{
inorder(root->left);
printf("%d",root->key);
inorder(root->right);
}}
int main()
{
int ch,key;
while(1){
printf("1.insert\n");
printf("2.delete\n");
printf("3.search\n");
printf("4.inorder\n");
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the value to insert");
scanf("%d",&key);
root=insert(root,key); break;
case 2:printf("enter the value to delete");
scanf("%d",&key);
root=delete(root,key); break;
case 3:printf("enter the value to search");
scanf("%d",&key);
if(search(root,key)!=NULL)
{
printf("element found %d",key);
}
else
{
printf("element not found %d",key);
}
break;
case 4:printf("inorder");
inorder(root);
break;
printf("\n");
case 5:exit(0);break;
default:printf("invalid");
}}}



