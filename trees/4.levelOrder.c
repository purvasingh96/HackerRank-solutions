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

void levelorder(struct node *root, int level){
	if(root==NULL){
		return;
	}
	if(level==1)
	{
		printf("%d", root->data);
	}
	else
	if(level>1){
		levelorder(root->left, level-1);
		levelorder(root->right, level-1);
	}
}
void printlevelorder(struct node *root){
	int i;
	int h= height(root);
	for(i=1;i<=h;i++){
		levelorder(root, i);
		printf("\n");
	}
}


int main(){
	
     struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6); 
    printf("Level Order traversal of binary tree is \n");
    printlevelorder(root);
    return 0;
}
