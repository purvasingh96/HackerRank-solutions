#include<stdio.h>
#include<stdlib.h>
int j=0, a[100], flag=0;
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
		a[j++]=root->data;
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
		
	}
}


int main(){
	
     

  struct node *root = newNode(50);
  root->left        = newNode(7);
  root->right       = newNode(2);
  root->left->left  = newNode(3);
  root->left->right = newNode(5);
  root->right->left  = newNode(1);
  root->right->right = newNode(30);
  

    printf("Level Order traversal of binary tree is \n");
    printlevelorder(root);
    printf("\n");
    int i;
    //int h=height(root);
    int k=0;
    for(i=1;i<6;i=i+2){
    	int p =a[k];
    	if(p==a[i]+a[i+1]){
    		flag=1;
		}
		k=k+1;
	}
	if(flag==1){
		printf("yes");
	}
	else{
		printf("no");
	}
    return 0;
}
