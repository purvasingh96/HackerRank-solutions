#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int data){
	struct node *node = (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}
int height(struct node *root){
	if(root==NULL){
		return;
	}
	else{
		int lh = height(root->left);
		int rh = height(root->right);
		
		if(lh>rh)
		{
			return (lh+1);
		}
		else{
			return (rh+1);
		}
	}
}
int max(int a, int b){
	return (a>=b)?a:b;
}

int diameter(struct node *root){
	if(root==NULL)
	return 0;
	
	int ldia = diameter(root->left);
	int rdia = diameter(root->right);
	
	int lh=height(root->left);
	int rh = height(root->right);
	
	return max(lh+rh+1, max(ldia, rdia));
}
int main()
{
 
  /* Constructed binary tree is 
            1
          /   \
        2      3
      /  \
    4     5
  */
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
 
  printf("Diameter of the given binary tree is %d\n", diameter(root));
 
  getchar();
  return 0;
}
