#include<stdio.h>

char tree[10];

int root(char key) {
  if (tree[0] != '\0')
    printf("Tree already had root");
  else
    tree[0] = key;
  return 0;
}

int set_left(char key, int parent) {
  if (tree[parent] == '\0')
    printf("\nCan't set child at %d, no parent found", (parent * 2) + 1);
  else
    tree[(parent * 2) + 1] = key;
  return 0;
}

int set_right(char key, int parent) {
  if (tree[parent] == '\0')
    printf("\nCan't set child at %d, no parent found", (parent * 2) + 2);
  else
    tree[(parent * 2) + 2] = key;
  return 0;
}

int print_tree() {
  printf("\n");
  for (int i = 0; i < 10; i++) {
    if (tree[i] != '\0')
      printf("%c", tree[i]);
    else
      printf("-");
  }
  return 0;
}

void inorder(int index) {
    if (tree[index] != '\0') {
        inorder((2 * index) + 1);    // Left child
        printf("%c ", tree[index]);  // Root
        inorder((2 * index) + 2);    // Right child
    }
}

// Function for preorder traversal
void preorder(int index) {
    if (tree[index] != '\0') {
        printf("%c ", tree[index]);  // Root
        preorder((2 * index) + 1);   // Left child
        preorder((2 * index) + 2);   // Right child
    }
}

// Function for postorder traversal
void postorder(int index) {
    if (tree[index] != '\0') {
        postorder((2 * index) + 1);  // Left child
        postorder((2 * index) + 2);  // Right child
        printf("%c ", tree[index]); // Root
    }
}

int main() {
   

   root('A');
  set_left('B', 0);
  set_right('C', 0);
  set_left('D', 1);
  set_right('E', 1);
  set_right('F', 2);
  print_tree();
    printf("Inorder traversal: ");
    inorder(0);
    printf("\n");

    printf("Preorder traversal: ");
    preorder(0);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(0);
    printf("\n");

    return 0;
}
