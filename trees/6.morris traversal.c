#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *left;
	struct node *right;
	int data;
};
struct node *newtNode(int data){
	struct node *node = (struct node *)malloc(sizeof(struct node));
	node->left=NULL;
	node->right=NULL;
	node->data=data;
	
	return (node);
}
void morrisTraversal(struct node *root){
	
	struct node *curr, *pre;
	if(root==NULL)
		return;
	curr=root;
	while(curr!=NULL){
		if(curr->left==NULL){
			printf("%d", curr->data);
			curr=curr->right;
		}
		else
		{
			pre=curr->left;
			while(pre->right!=NULL && pre->right!=curr){
				pre=pre->right;
			}
			if(pre->right==NULL){
				pre->right=curr;
				curr=curr->left;
			}
			else{
				pre->right=NULL;
				printf("%d", curr->data);
				curr=curr->right;
			}
		}
	}
}


/* Driver program to test above functions*/
int main()
{
 
  /* Constructed binary tree is
            1
          /   \
        2      3
      /  \
    4     5
  */
  struct node *root = newtNode(1);
  root->left        = newtNode(2);
  root->right       = newtNode(3);
  root->left->left  = newtNode(4);
  root->left->right = newtNode(5); 
 
  morrisTraversal(root);
 
  getchar();
  return 0;
}
