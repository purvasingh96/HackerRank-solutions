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
void levelorder(struct node *root, int level, int itr){
	if(root==NULL){
		return;
	}
	if(level==1){
		printf("%d", root->data);
	}
	else if(level>1){
		if(itr){
		levelorder(root->left, level-1, itr);
		levelorder(root->right, level-1, itr);
		}
		else{
		levelorder(root->right, level-1, itr);
		levelorder(root->left, level-1, itr);
		}
		
	}
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

void printLevel(struct node *root){
	int i;
	int h= height(root);
	int itr=0;
	for(i=1;i<=h;i++){
		levelorder(root, i, itr);
		itr=!itr;
	}
}



int main(){
	
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(7);
    root->left->right = newNode(6);
    root->right->left  = newNode(5);
    root->right->right = newNode(4);
 
    printf("Level Order traversal of binary tree is \n");
    printLevel(root);
    return 0;
}
