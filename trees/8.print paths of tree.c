#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *left;
	struct node *right;
	int data;
};

struct node *newNode(int data){
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->left=NULL;
	node->right=NULL;	
	node->data=data;
}

void printArray(int path[], int pathLen){
	int i;
	for(i=0;i<pathLen;i++){
		printf("%d", path[i]);
	}
	printf("\n");
}

void printPathsRecur(struct node *node, int path[], int pathLen){
	if(node==NULL)
		return;
	path[pathLen]=node->data;
	pathLen++;
	
	if(node->left==NULL && node->right==NULL){
		printArray(path, pathLen);
	}
	else{
		printPathsRecur(node->left, path, pathLen);
		printPathsRecur(node->right, path, pathLen);
	}
}
void printPath(struct node *node){
	int path[1000];
	printPathsRecur(node, path, 0);
}

int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5); 
 
  /* Print all root-to-leaf paths of the input tree */
  printPath(root);
 
  getchar();
  return 0;
}
