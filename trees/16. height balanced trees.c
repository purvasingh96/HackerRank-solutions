#include<stdio.h>
#include<stdlib.h>
int flag=0;
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

int checkbalance(struct node *root){
	if(root==NULL){
		flag=1;
	}
	else{
	
		if(checkbalance(root->left) && checkbalance(root->right) && (abs(height(root->left)-(height(root->right)))<=1)){
			flag=1;
		}
		else{
			flag=0;
		}
	}
	return flag;
}

int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(8);
 
    if(checkbalance(root))
      printf("Tree is balanced");
    else
      printf("Tree is not balanced");    
 
    getchar();
    return 0;
}
