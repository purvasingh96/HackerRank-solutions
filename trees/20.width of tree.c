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

int levelorder(struct node *root, int level){
	if(root==NULL){
		return;
	}
	if(level==1){
		return 1;
	}
	else if(level>1){
	return (levelorder(root->left, level-1) + levelorder(root->right, level-1));
	}
}

int maxwidth(struct node *root){
	int i, max=0;
	int h= height(root);
	int a[h], j=1;
	for(i=1;i<=h;i++){
		
		int width= levelorder(root, i);
		if(width>max){
			max=width;
		}
		
	}
	return max;
	
}

int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  root->right->right = newNode(8);    
  root->right->right->left  = newNode(6);    
  root->right->right->right  = newNode(7);      
 
  /*
   Constructed bunary tree is:
          1
        /  \
       2    3
     /  \     \
    4   5     8 
              /  \
             6   7
  */ 
  int wid = maxwidth(root);  
  printf("%d", wid);
  getchar();
  return 0;
}
