#include<iostream>
#include<map>
#include<vector>
using namespace std;

struct node{
	struct node *left, *right;
	int key;
};
struct node *newNode(int key){
	struct node *nodes =new node;
	nodes->left=nodes->right=NULL;
	nodes->key=key;
}

void getverticalorder(struct node *root, int hd, map <int, vector<int> >&m){
	if(root==NULL){
		return;
	}
	m[hd].push_back(root->key);
	
	getverticalorder(root->left, hd-1, m);
	getverticalorder(root->right, hd+1, m);
}

void printverticalorder(struct node *root){
	map <int, vector<int> > m;
	int hd=0, i;
	getverticalorder(root, hd, m);
	
	map<int, vector<int> >::iterator it;
	for(it=m.begin();it!=m.end();it++){
		for(i=0;i<it->second.size();i++){
			cout<<it->second[i]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    cout << "Vertical order traversal is \n";
    printverticalorder(root);
    return 0;
}
