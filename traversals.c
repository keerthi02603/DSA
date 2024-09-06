#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode()
{
int d;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  
  
    newNode->left = NULL;
    newNode->right = NULL;
    //printf("enter the data");
    scanf("%d",&d);
    if(d==-1)
    return NULL;
      newNode->data = d;
      printf("enter the left child of %d",d);
      newNode->left=createNode();
        printf("enter the rightt childwq of %d",d);
      newNode->right=createNode();
    return newNode;
}

// Function for preorder traversal
void preorder(struct Node* root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data); // Print the data
    preorder(root->left); // Visit left subtree
    preorder(root->right); // Visit right subtree
}

// Function for inorder traversal
void inorder(struct Node* root)
{
    if (root == NULL)
        return;

    inorder(root->left); // Visit left subtree
    printf("%d ", root->data); // Print the data
    inorder(root->right); // Visit right subtree
}

// Function for postorder traversal
void postorder(struct Node* root)
{
    if (root == NULL)
        return;

    postorder(root->left); // Visit left subtree
    postorder(root->right); // Visit right subtree
    printf("%d ", root->data); // Print the data
}
int main()
{ // Create the binary tree
    struct Node* root =NULL;
    root= createNode();
   /* root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);*/
     if (root == NULL)
        return 0;
    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");
    return 0;
}

