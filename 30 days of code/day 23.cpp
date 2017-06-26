	void levelOrder(Node * root){
      //Write your code here
        queue <Node *>q;
        Node *temp = root;
        
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            
            if(!q.empty())
            {
                temp = q.front();
                q.pop();
            }
            else{
                temp=NULL;
            }
        }
  	
  
	}
