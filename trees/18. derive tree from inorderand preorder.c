#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *left;
	struct node *right;
	char data;
};

struct node *newNode (char data){
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->left=NULL;
	node->right=NULL;
	node->data=data;
}

int search(char arr[], int strt, int end, char value)
{
  int i;
  for(i = strt; i <= end; i++)
  {
    if(arr[i] == value)
      return i;
  }
}

struct node  *buildtree(char in[], char pre[], int instrt, int inend){
	
	static int preIndex=0;
	
	if(instrt>inend)
	return NULL;
	
	struct node *tnode = newNode(pre[preIndex++]);
	
	if(instrt==inend){
		return tnode;
	}
	int inIndex = search(in, instrt, inend, tnode->data);
	
	tnode->left = buildtree(in, pre, instrt, inIndex-1);
	tnode->right = buildtree(in, pre, inIndex+1, inend);
	
	return tnode;
}

void printInorder(struct node* node)
{
  if (node == NULL)
     return;
 
  /* first recur on left child */
  printInorder(node->left);
 
  /* then print the data of node */
  printf("%c ", node->data);
 
  /* now recur on right child */
  printInorder(node->right);
}

int main()
{
  char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
  char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
  int len = sizeof(in)/sizeof(in[0]);
  struct node *root = buildtree(in, pre, 0, len - 1);
 
  /* Let us test the built tree by printing Insorder traversal */
  printf("Inorder traversal of the constructed tree is \n");
  printInorder(root);
  getchar();
}


