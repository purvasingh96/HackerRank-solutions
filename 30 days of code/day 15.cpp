Node* insert(Node *head,int data)
{
    Node *newdata;
    newdata = (Node*)malloc(sizeof(Node));
    
    if(head==NULL){
        head=newdata;
        head->data=data;
        head->next=NULL;
        return head;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=newdata;
    temp->next->data=data;
    temp->next->next=NULL;
    return head;
}
