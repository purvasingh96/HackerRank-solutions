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

void levelorder(struct node *root, int level, int x){
	if(root==NULL){
		return;
	}
	if(level==1)
	{
		if(x==root->data){
			printf("%d", level);
		}
	}
	else
	if(level>1){
		levelorder(root->left, level-1, x);
		levelorder(root->right, level-1, x);
	}
}
void printlevelorder(struct node *root, int x){
	int i;
	int h= height(root);
	for(i=1;i<=h;i++){
		levelorder(root, i, x);
		
	}
}


int main(){
	
    struct node *root = newNode(3);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(4);
 
    printf("Level Order traversal of binary tree is \n");
    
    int x;
    scanf("%d", &x);
    printlevelorder(root, x);
    if(x)
    return 0;
}
