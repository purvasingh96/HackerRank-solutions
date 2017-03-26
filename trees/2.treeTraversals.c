#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int data){
	struct node *node= (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}

void inorder(struct node *root){
	if(root==NULL){
		return;
	}
	else{
		inorder(root->left);
		printf("%d", root->data);
		inorder(root->right);
	}
}

void preorder(struct node *root){
	if(root==NULL){
		return;
	}
	else{
		printf("%d", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node *root){
	if(root==NULL){
		return;
	}
	else{
		postorder(root->left);
		postorder(root->right);
		printf("%d", root->data);
	}
}

int main()
{
     struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5); 
 
     printf("\nPreorder traversal of binary tree is \n");
     preorder(root);
 
     printf("\nInorder traversal of binary tree is \n");
     inorder(root);  
 
     printf("\nPostorder traversal of binary tree is \n");
     postorder(root);
 
     getchar();
     return 0;
}
