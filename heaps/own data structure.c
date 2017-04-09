#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct lnode{
	struct lnode *prev, *next;
	int minheapindex, maxheapindex;
	int data;
};

struct list{
	struct lnode *head;
};
struct minheap{
	int capacity;
	int size;
	struct lnode *arr;
};
struct maxheap{
	int capacity;
	int size;
	struct lnode *arr;
};
struct myds{
	struct maxheap *maxhp;
	struct minheap *minhp;
	struct list *lst;
};

void swapdata(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
void swaplnodedata(struct lnode *a, struct lnode *b){
	struct lnode* t=*a;
	*a=*b;
	*b=t;
}
struct lnode *newnode(int data){
	struct lnode node = (struct lnode *)malloc(sizeof(struct lnode));
	node->data=data;
	node->maxheapindex=node->minheapindex=-1;
	node->next=node->prev=NULL;
}
struct maxheap *createmaxheap(int capacity){
	struct maxheap *maxhp = (struct maxheap*)malloc(sizeof(struct maxheap));
	maxhp->capacity=capacity;
	maxhp->size=0;
	maxhp->arr = (struct lnode **)malloc(sizeof(struct lnode *));
	return maxhp;
}
struct minheap *createminheap(int capacity){
	struct minheap *minhp = (struct minheap*)malloc(sizeof(struct minheap));
	minhp->capacity=capacity;
	minhp->size=0;
	minhp->arr = (struct lnode **)malloc(sizeof(struct lnode *));
	return minhp;
}
struct list *createlist(){
	struct list *lst = (struct list*)malloc(sizeof(struct list));
	lst->head=NULL;
	return lst;
}
struct myds *createmyds(int capacity){
	struct myds *mds = (struct myds*)malloc(sizeof(struct myds));
	myds->lst=createlist();
	myds->maxhp=createmaxheap(capacity);
	myds->minhp= createminheap(capacity);
	return mds;
}
int isMaxHeapEmpty(struct maxheap* heap)
{  return (heap->size == 0); }
 
int isMinHeapEmpty(struct minheap* heap)
{  return heap->size == 0; }
 
int isMaxHeapFull(struct maxheap* heap)
{  return heap->size == heap->capacity; }
 
int isMinHeapFull(struct minheap* heap)
{  return heap->size == heap->capacity; }
 
int isListEmpty(struct list* lst)
{  return !lst->head;   }
 
int hasOnlyOneLNode(struct list* lst)
{    return !lst->head->next && !lst->head->prev; }
 
void minHeapify(struct minheap* minHeap, int index)
{
    int smallest, left, right;
    smallest = index;
    left = 2 * index + 1;
    right = 2 * index + 2;
 
    if ( minHeap->arr[left] &&
         left < minHeap->size &&
         minHeap->arr[left]->data < minHeap->arr[smallest]->data
       )
        smallest = left;
 
    if ( minHeap->arr[right] &&
         right < minHeap->size &&
         minHeap->arr[right]->data < minHeap->arr[smallest]->data
       )
        smallest = right;
 
    if (smallest != index)
    {
        // First swap indexes inside the List using address
        // of List nodes
        swapData(&(minHeap->arr[smallest]->minHeapIndex),
                 &(minHeap->arr[index]->minHeapIndex));
 
        // Now swap pointers to List nodes
        swapLNode(&minHeap->arr[smallest],
                  &minHeap->arr[index]);
 
        // Fix the heap downward
        minHeapify(minHeap, smallest);
    }
}

