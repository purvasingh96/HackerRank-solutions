#include<stdio.h>
#include<stdlib.h>
int c=0;
struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int data){
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->left=NULL;
	node->right=NULL;
	node->data=data;
}

int leafNodes(struct node *root){
	//int c;
	/*if(root==NULL || root->left==NULL || root->right==NULL){
		return;
	}
	else{*/
		if(root->left==NULL || root->right==NULL){
			return;
		}
		//printf("count: %d data: %d\n", c, root->data);
		++c;	
		leafNodes(root->left);
		leafNodes(root->right);
		
	return c;
		}
int main()
{
  /*create a tree*/ 
  struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);    
   
  /*get leaf count of the above created tree*/
  int x=leafNodes(root);
  printf("%d", (x+1));
   
  getchar();
  return 0;
}
