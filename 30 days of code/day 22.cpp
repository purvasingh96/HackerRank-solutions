		int getHeight(Node* root){
          //Write your code here
            //int height;
            if(root==NULL)
            {
                //height=0;
                return -1;
            }
            int left_ht = getHeight(root->left);
            int right_ht = getHeight(root->right);
            int height = max(left_ht, right_ht)+1;
            return height;
        }

