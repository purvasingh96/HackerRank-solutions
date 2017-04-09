#include<iostream>
#include<climits>

#include <bits/stdc++.h>
using namespace std;
int lsize;
struct node {
	struct node *left, *right;
	int data;
};

struct node *createNode(int data){
	struct node *t = new node;
	t->left=NULL;
	t->right=NULL;
	t->data=data;
	return t;
}

void traverseHeight(struct node *root, int arr[], int &res){
	if(root==NULL || root->left==NULL && root->right==NULL){
		return;
	}
	if(res>arr[root->left->data] && root->left->data!=root->data){
		res = arr[root->left->data];
		traverseHeight(root->right, arr, res);
	}
	else if(res>arr[root->right->data] && root->right->data!=root->data){
		res=arr[root->right->data];
		traverseHeight(root->left, arr, res);
	}
}

void secondMin(int arr[], int n){
	list<struct node *> li;
	struct node *root=NULL;
	int i;
	for(i=0;i<n;i=i+2){
		struct node *t1= createNode(i);
		struct node *t2= NULL;
		if(i+1<n){
			t2=createNode(i+1);
			root = (arr[i]<arr[i+1])?createNode(i):createNode(i+1);
			root->left=t1;
			root->right=t2;
			
			li.push_back(root);
		}
		else{
			li.push_back(t1);
		}
		lsize=li.size();
		
		while(lsize!=1){
			
			int last = (lsize&1)?(lsize-2):(lsize-1);
			int i;
			for(i=0;i<last;i=i+2){
				node *f1= li.front();
				li.pop_front();
				
				node *f2= li.front();
				li.pop_front();
				
				root = (arr[f1->data]<arr[f2->data])?createNode(f1->data):createNode(f2->data);
				
				root->left=f1;
				root->right=f2;
				
				li.push_back(root);
			}
			if(lsize&1){
				li.push_back(li.front());
				li.pop_front();
			}
			lsize=li.size();
		}
		
	}
	int res=INT_MAX;
		traverseHeight(root, arr, res);
		cout<<"minimum: "<<arr[root->data];
		cout<<"res: "<<res;
}
int main()
{
    int arr[] = {61, 6, 100, 9, 10, 12, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
    secondMin(arr, n);
    return 0;
}
