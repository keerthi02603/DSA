//1.write a program to implement the singly linked list with operations
#include<stdio.h>
#include<stdlib.h>

void InsertAtBegin();
void InsertAtEnd();
void InsertAtPosition();
void DeleteFirstNode();
void DeleteLastNode();
void DeleteAtPosition();
int length();
void traverse();


struct node 
{
	int data;
	struct node *link;
}*root=NULL;
int main()
{
	printf("\n\n\t\t** Singly linked list implementation **\n\n");
	int ch;
	int x;
	while(1)
	{
		printf("1.insert at begin\n");
		printf("2.insert at end\n");
		printf("3.insert at position\n");
		printf("4.delete first node\n");
		printf("5.delete node at end\n");
		printf("6.delete node at position\n");
		printf("7.length\n");
		printf("8.traverse\n");
		printf("9.exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);

		switch (ch)
		{
		case 1:InsertAtBegin();
			break;
		case 2:InsertAtEnd();
			break;
		case 3:InsertAtPosition();
			break;
		case 4:DeleteFirstNode();
			break;
		case 5:DeleteLastNode();
			break;
		case 6:DeleteAtPosition();
			break;
		case 7:x=length();
				if(x==0)
				{
					printf("\n\nNo Elements\n\n");
				}
				else
				{
					printf("\n\nSize = %d\n\n",x);
				}
			break;
		case 8:traverse();
			break;
		case 9:printf("\n\nSuccesfully completed\n\n");
			   exit(0);		
		default:
			printf("Invalid entry\n");
			}

		printf("\n\n");
		
	}
}
//insert at begin function
void InsertAtBegin()
{
	struct node* new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data :");
	scanf("%d",&new->data);
	new->link=NULL;
	if(root==NULL)
	{
		root=new;		
	}
	else
	{
		struct node *p=root;
		new->link=root;
		root=new;
	}
	printf("\n%d added succesfully\n",new->data);
}

void InsertAtEnd()
{
	struct node* new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data :");
	scanf("%d",&new->data);
	new->link=NULL;
	if(root==NULL)
	{
		root=new;		
	}
	else
	{
		struct node *p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=new;
	}
	printf("\n%d added succesfully\n",new->data);

}

void InsertAtPosition()
{
	struct node* new;
	new=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data :");
	scanf("%d",&new->data);
	new->link=NULL;
	if(root==NULL)
	{
		root=new;		
	}
	else
	{
		int pos,i;
		struct node *p=root;
		printf("Enter the position");
		scanf("%d",&pos);
		if(pos==1)
		{
			new->link=root;
			root=new;
			printf("\n\n%d added succesfully\n\n",new->data);
		}
		else if(pos<=length())
		{
			
			for(i=1;i<pos-1;i++)
			{
				p=p->link;
			}
			new->link=p->link;
			p->link=new;
			printf("\n\n%d added succesfully\n\n",new->data);

		}
		else
		{
			printf("\n\nInvalid Position\n\n");
		}
	}
	

}

void DeleteFirstNode()
{
	if(root==NULL)
	{
		printf("\n\nNo Elements\n\n");
	}
	else
	{
		printf("\n\n%d is deleted\n\n",root->data);
		root=root->link;
	}

}

void DeleteLastNode()
{
	if(root==NULL)
	{
		printf("\n\nNo Elements\n\n");
	}
	else if(root->link==NULL)
	{
		printf("\n\n%d is deleted\n\n",root->data);
		root=NULL;
	}
	else
	{
		struct node *p=root,*ptr;
		while(p->link!=NULL)
		{
			ptr=p;
			p=p->link;
		}
		ptr->link=NULL;
		printf("\n\n%d is deleted\n\n",p->data);
		
	}

}

void DeleteAtPosition()
{	
	if(root==NULL)
	{
		printf("\n\nNo Elements\n\n");
	}
	else 
	{
		struct node *p,*q;
		int pos,i;
		printf("Enter the position");
		scanf("%d",&pos);
		if(pos>length())
		{
			printf("\n\nInvalid Position\n\n");
		}
		else if(pos==1)
		{
			p=root;
			root=p->link;
			p->link=NULL;
			free(p);
		}
		else
		{
			int i;
			p=root;
			for(i=1;i<pos-1;i++)
			{
				p=p->link;
			}
			q=p->link;
			p->link=q->link;
			q->link=NULL;
			printf("\n\n%d is deleted\n\n",q->data);
			free(q);
		}
		
		
		
	}

}

int length()
{
	int count=0;
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		struct node *p=root;
		while(p!=NULL)
		{
			count++;
			p=p->link;
		}
		return count;
	}

}

void traverse()
{
	printf("\n\n");
	if(root==NULL)
	{
		printf("\nNo elements\n");
	}
	else
	{
		struct node *p=root;
		while(p!=NULL)
		{
			printf("%d-->",p->data);
			p=p->link;
		}
	}
	printf("\n\n");
}
