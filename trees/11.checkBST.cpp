#include<iostream>
#include<conio.h>
#include <algorithm>
#include<array>
using namespace std;

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

void checkBST(struct node *root){
	int i=0;
	array <int, 100>  arr inorder(root);
	if(is_sorted(arr.begin(), arr.end())){
		cout<<"yes";
	}
	else{
		cout<<"false";
	}
}

int main(){
	struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5); 
 
     printf("\nInorder traversal of binary tree is \n");
     checkBST(root);  
 
     getchar();
     return 0;
}

