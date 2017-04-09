#include<iostream>
#include<climits>
using namespace std;

void swap(int *x, int *y);

class maxheap{
	int capacity;
	int size;
	int *arr;
	public:
		maxheap(int c);
		void heapify(int i);
		int extractMax();
		void insertKey(int k);
};

maxheap::maxheap(int c){
	size=0;
	capacity=c;
	arr = new int[c];
}
void maxheap::heapify(int i){
	int max=i;
	int l= 2*i+1;
	int r=2*i+2;
	if(l<capacity && arr[l]>arr[i]){
		max=l;
	}
	if(r<capacity && arr[r]>arr[max]){
		max=r;
	}
	if(max!=i){
		swap(arr[i], arr[max]);
		
		heapify(max);
	}
}
int maxheap:: extractMax(){
	if (size==0){
		return INT_MIN;
	}
	if(size==1){
		size--;
		return arr[0];
	}
	int temp= arr[0];
	arr[0]=arr[size-1];
	size--;
	heapify(0);
	
	return temp;
}
void maxheap::insertKey(int k){
	if(size==capacity){
		cout<<"overflow";
	}
	size++;
	int i=size-1;
	arr[i]=k;
	
	while(i!=0 && arr[i]>arr[(i-1)/2]){
		swap(&arr[i], &arr[(i-1)/2]);
		i=(i-1)/2;
	}
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
// Driver program to test above functions
int main()
{
    maxheap h(7);
    h.insertKey(1);
    h.insertKey(23);
    //h.deleteKey(1);
    h.insertKey(12);
    h.insertKey(9);
    h.insertKey(30);
    h.insertKey(2);
    h.insertKey(50);
    int x;
    cout<<"enter x: ";
    cin>>x;
    while(x>0){
    	cout << h.extractMax() << " ";
    	x=x-1;
	}
    
    //cout << h.getMin() << " ";
    //h.decreaseKey(2, 1);
    //cout << h.getMin();
    return 0;
}
