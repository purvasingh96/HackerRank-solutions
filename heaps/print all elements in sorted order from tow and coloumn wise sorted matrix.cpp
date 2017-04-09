#include<iostream>
#include<climits>
using namespace std;

#define n 4

struct node {
	int i, j, data;
};

void swap(node *x, node *y);

class minheap{
	node *harr;
	int hsize;
	
	public:
		minheap(node arr[], int size);
		void heapify(int i);
		int left(int i){
			return (2*i+1);
		}
		int right(int i){
			return (2*i+2);
		}
		node getmin(){
			return harr[0];
		}
		void replace(node x){
			harr[0]=x;
			heapify(0);
		}
};
void swap(node *a, node *b){
	node t =*a;
	*a=*b;
	*b=t;
}
void minheap::heapify(int i){
	int l= left(i);
	int r= right(i);
	int min =i;
	if(l<hsize && harr[l].data< harr[i].data){
		min=l;
	}
	if(r<hsize && harr[r].data< harr[min].data){
		min=r;
	}
	if(min!=i){
		swap(&harr[i], &harr[min]);
		heapify(min);
	}
}
minheap::minheap(node a[], int size){
	hsize=size;
	harr = a;
	int i = (hsize-1)/2;
	while(i>=0){
		heapify(i);
		i--;
	}
}
void printsorted(int mat[][n]){
	node *harr = new node[n];
	int i;
	for(i=0;i<n;i++){
		harr[i].data=mat[i][0];
		harr[i].i=i;
		harr[i].j=1;
	}
	minheap hp(harr, n);
	
	int c;
	for(c=0;c<n*n;c++){
		node root= hp.getmin();
		cout<<root.data<<" ";
		
		if(root.j<n){
			root.data = mat[root.i][root.j];
			root.j=root.j+1;
		}
		else
		root.data=INT_MAX;
		
		hp.replace(root);
	}
}

int main()
{
  int mat[n][n] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  printsorted(mat);
  return 0;
}
