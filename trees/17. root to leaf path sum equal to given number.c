#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newnode(int data){
	struct node *node = (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}

void printarray(int a[], int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
void printPathsRecur(struct node *node, int path[], int len){
	if(node==NULL){
		return;
	}
	path[len]=node->data;
	len++;
	//printf("path[len]: %d \n", 	path[len]);
	if(node->left==NULL && node->right==NULL){
		printarray(path, len);
	}
	else{
		 printPathsRecur(node->left, path, len);
		 //printarray(path, len);
    printPathsRecur(node->right, path, len);
	}
}
void printPaths(struct node* node) 
{
  int path[1000];
  printPathsRecur(node, path, 0);
}

int main()
{ 
  
  /* Constructed binary tree is
            10
          /   \
        8      2
      /  \    /
    3     5  2
  */
  struct node *root = newnode(10);
  root->left        = newnode(8);
  root->right       = newnode(2);
  root->left->left  = newnode(3);
  root->left->right = newnode(5);
  root->right->left = newnode(2);
  
  printPaths(root);
  
  getchar();
  return 0;
}
