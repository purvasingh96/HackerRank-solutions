#include<iostream>
using namespace std;

struct minheap{
	int size;
	int capacity;
	int *harr;
};

struct minheap *createminheap(int capacity){
	struct minheap *heap = new minheap;
	heap->capacity=capacity;
	heap->size=0;
	heap->harr = new int[capacity];
	return heap;
}

void swapheap(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

void heapify(struct minheap *heap, int i){
	int min =i;
	int l = (2*i+1);
	int r = (2*i+2);
	
	if(l<heap->size && heap->harr[l]< heap->harr[min]){
		min=l;
	}
	if(r<heap->size && heap->harr[r]<heap->harr[min]){
		min=r;
	}
	if(min!=i){
		swap(&heap->harr[i], &heap->harr[min]);
		heapify(heap, min);
	}
}

int issizeone(struct minheap *heap){
	return(heap->size==1);
}

int extractmin(struct minheap *heap){
	int t = heap->harr[0];
	heap->harr[0]= heap->harr[heap->size-1];
	--heap->size;
	heapify(heap, 0);
	return t;
}

void insertheap(struct minheap *heap, int val){
	++heap->size;
	int i= heap->size-1;
	while(i && (val< heap->harr[(i-1)/2])){
		heap->harr[i] = heap->harr[(i-1)/2];
		i=(i-1)/2;
	}
	heap->harr[i]=val;
}

void buildheap(struct minheap *heap){
	int n= heap->size-1;
	int i;
	for(i=(n-1)/2; i>=0;--i){
		
	}
}
