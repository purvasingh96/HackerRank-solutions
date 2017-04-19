void inorder(Node *root, vector<int> &a){
    int i=0;
    if(root==NULL){
        return;
    }
    else{
        inorder(root->left, a);
        a.push_back(root->data);
        inorder(root->right, a);
    }
}
bool checkBST(Node * root){
    vector<int> a;
    
    inorder(root, a);
    bool asc=true;
    int i;
    for(i=0;i<a.size()-1;i++){
        if(a.at(i)>=a.at(i+1)){
            asc=false;
            break;
        }
    }
    return asc;
}
