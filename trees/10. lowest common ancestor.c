#include<stdio.h>
#include<stdlib.h>

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

int lca(struct node *node, int v1, int v2){
	if(node==NULL){
		return NULL;
	}
	if(node->data==v1 || node->data==v2){
		return node;
	}
	node *left_lca = lca(node->left, v1, v2);
	node *right_lca = lca(node->right, v1, v2);
	
	if(left_lca && right_lca)
		return node;
	
	return (left_lca!=NULL)? left_lca : right_lca;
}
