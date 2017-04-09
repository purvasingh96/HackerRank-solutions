#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int c=0;
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

int levelorder(struct node *root, int level){
	//int c;
	if(root==NULL){
		return;
	}
	if(level==0)
	{
		//printf("%d", root->data);
		c=c+1;
		
	}
	else
	if(level>0){
		levelorder(root->left, level-1);
		levelorder(root->right, level-1);
	}
	return c;
}

bool checkprop(struct node *root){
	if(root->left==NULL && root->right==NULL){
		return true;
	}
	else if (root->right==NULL){
		if(root->data>=root->left->data){
			return true;
		}
	}
	else{
		if(root->data >= root->left->data && root->data>=root->right->data){
			return (checkprop(root->left) && checkprop(root->right));
		}
		else
		return false;
	}
}
void printlevelorder(struct node *root){
	int i, flag=0, y;
	int h= height(root);
	for(i=1;i<=h-2;i++){
		c=0;
		int x = levelorder(root, i);
		y = checkprop(root);
		if(x==2^(i)){
			flag=1;
		}
	}
	if(flag==1 && (checkprop)){
		printf("heap");
	}
	else{
		printf("not heap");
	}
	
}


int main(){
	
     struct node *root = newNode(97);
    root->left = newNode(46);
    root->right = newNode(37);
    root->left->left = newNode(12);
    root->left->right = newNode(3);
    root->right->right = newNode(31);
	root->right->left= newNode(7);
	root->left->left->left = newNode(6);
	root->left->left->right = newNode(9); 
    printlevelorder(root);
    return 0;
}
