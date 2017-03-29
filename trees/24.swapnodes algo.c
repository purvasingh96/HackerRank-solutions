#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

void inOrder(struct node* node) 
{
  if (node==NULL) 
    return;
   
  inOrder(node->left);
  printf("%d ", node->data);
  inOrder(node->right);
} 
 
void mirror(struct node *root){

		struct node *temp;
		temp=root->left;
		root->left=root->right;
		root->right=temp;
	
}

void levelorder(struct node *root, int level){
	if(root==NULL){
		return;
	}
	if(level==0)
	{
		mirror(root);
	}
	else
	{
		levelorder(root->left, level-1);
		levelorder(root->right, level-1);
	}
}





int main()
{
  int n, i=0, a, c, t, k;
    scanf("%d", &n);
    struct node *b[n];
    for(i=0;i<n;i++){
    	struct node *temp;
    	temp = (struct node *)malloc(sizeof(struct node));
    	temp->data=i+1;
    	b[i]=temp;
	}
	for(i=0;i<n;i++){
		scanf("%d %d", &a, &c);
		if(a==-1){
			b[i]->left=NULL;
		}
		else{
			b[i]->left=b[a-1];
		}
		if(c==-1){
			b[i]->right=NULL;
		}
		else{
			b[i]->right=b[c-1];
		}
	}
	struct node *root;
	root = b[0];
    scanf("%d", &t);
    while(t-->0){
     scanf("%d", &k);
     i=k;
     while(i<n){
     	levelorder(root, i-1);
     	i=i+k;
	 }
       	
        inOrder(root);
        printf("\n");
 }
   
    return 0;
}
