#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void linkedListTraversal(Node* head){

Node* currentNode = head;
for(currentNode=head;currentNode!=NULL;currentNode=currentNode->next) {
        cout<<currentNode->data<<" ";
    }

}

void insertNodeAtBegining(Node* head, int newNode) {

Node* newHeadNode=NULL;
newHeadNode = new Node();
newHeadNode->data=newNode;
newHeadNode->next=head;
head=newHeadNode;
linkedListTraversal(head);

}

void insertNodeAtGivenPosition(Node* head, int position, int newNodeData) {

Node* currentNode = head;
position=position-1;
while(--position>0) {
    currentNode=currentNode->next;
}

Node* insertNewNode=NULL;
insertNewNode = new Node();
insertNewNode->data=newNodeData;
insertNewNode->next=currentNode->next;
currentNode->next=insertNewNode;

linkedListTraversal(head);

}


int lengthOfLinkedListRecursive(Node* head) {
   if(head==NULL)
        return 0;
    return 1+lengthOfLinkedListRecursive(head->next);

}

string searchForNode(Node* head, int searchNode) {


if(head==NULL)
    return "NO";
Node* currentNode = new Node();
currentNode=head;
if(currentNode->data==searchNode)
    return "YES";

return searchForNode(head->next, searchNode);

}


void insertNodeAfter(Node* prevNode, int newData) {

    if(prevNode==NULL) {
        cout<<"prevNode cannot be NULL.";
    }
    Node* newNode = new Node();
    newNode->data=newData;
    newNode->next=prevNode->next;
    prevNode->next=newNode;

}

void deleteNode(Node* headRef, int deleteNodeData) {

Node* currentNode= headRef;
Node* prevNode = currentNode;

while(currentNode->data!=deleteNodeData) {
    prevNode=currentNode;
    currentNode=currentNode->next;
}
if(currentNode==NULL) {
cout<<"element not found to delete";
}
prevNode->next=currentNode->next;
free(currentNode);
linkedListTraversal(headRef);

}


void deleteLinkedList(Node** headRef) {

Node* currentNode= *headRef;
Node* next;

while(currentNode!=NULL) {

    next=currentNode->next;
    free(currentNode);
    currentNode=next;

}

}

int getNodeAtNthPosition(Node* head, int pos, int lengthOfLL) {

    int index=1;
    if(pos>lengthOfLL)
        return NULL;
    if(index==pos) {
        return head->data;
    }
    getNodeAtNthPosition(head->next, --pos, 5);


}


int getNodeAtNthPosFromEnd(Node* head, int pos, int lengthofll) {
    getNodeAtNthPosition(head, ((lengthofll-pos)+1), lengthofll);

}

void push(Node** head_ref, int newData) {

    Node* newNode = new Node();
    newNode->data=newData;
    newNode->next=(*head_ref);
    (*head_ref)=newNode;
}

int main() {

    Node* head=NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
    cout<<lengthOfLinkedListRecursive(head);
    cout<<"\n";
    cout<<searchForNode(head, NULL);
    cout<<"\n";
    cout<<getNodeAtNthPosition(head, 4, 5);
    cout<<"\n";
    cout<<getNodeAtNthPosFromEnd(head, 4, 5);

    return 0;



}
