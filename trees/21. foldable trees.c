#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int flag=0, leftflag=0, rightflag=0;
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

void mirror(struct node *root)
{
	if(root==NULL){
		return;
	}
	else{
		struct node *t;
		mirror(root->left);
		mirror(root->right);
		
		t=root->left;
		root->left=root->right;
		root->right=t;
	}
}

bool isStructuresame(struct node *root1, struct node *root2){
	if(root1==NULL && root2==NULL){
		return true;
	}
	if(root1!=NULL && root2!=NULL && isStructuresame(root1->left, root2->left) && isStructuresame(root1->right, root2->right)){
		return true;
	}
	return false;
}

bool foldable(struct node *root){
	bool res;
	mirror(root->left);
	res = isStructuresame(root->left, root->right);
	mirror(root->left);
	return res;
}

int main(void)
{
  /* The constructed binary tree is
         1
       /   \
      2     3
      \    /
       4  5
  */
  struct node *root = newNode(10);
    root->left        = newNode(7);
    root->right       = newNode(15);
    root->left->left  = newNode(5);
    root->left->right = newNode(11);
    
 
  if(foldable(root) == 1)
  { printf("\n tree is foldable"); }
  else
  { printf("\n tree is not foldable"); }
 
 
  getchar();
  return 0;
}
