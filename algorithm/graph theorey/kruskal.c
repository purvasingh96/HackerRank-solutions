#include<stdio.h>
#include<stdlib.h>
struct Edge{
	int source;
	int dest;
	int weight;
};

int Find(int parent[], int i){
	if(parent[i]==-1)
		return i;
	Find(parent, parent[i]);
}
void Union(int parent[], int x, int y){
	int xSet = Find(parent, x);
	int ySet = Find(parent, y);
	parent[xSet] = ySet;
}
int compare(const void *a, const void *b){
	struct Edge *p =(struct Edge*)a;
	struct Edge *q =(struct Edge*)b;
	return p->weight-q->weight;
}
void MakeSet(int parent[], int n){
	int i;
	for(i=0;i<n;i++){
		parent[i]=-1;
	}
}

void Print(int arr[],int parent[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("parent of %d is %d\n",i,parent[i]);
	printf("\n\n");
}

int main(){
	
	int n, e, i, weight, sum=0, src, dest;
	scanf("%d%d", &n, &e);
	struct Edge edges[e];
	int parent[n+1];
	for(i=0;i<e;i++){
		scanf("%d %d %d", &edges[i].source, &edges[i].dest, &edges[i].weight);
	}
	MakeSet(parent, n+1);
	qsort(edges, e, sizeof(struct Edge), compare);
	
	for(i=0;i<e;i++){
		if(Find(parent, edges[i].source)==Find(parent, edges[i].dest)){
			continue;
		}
		else{
			sum = sum+edges[i].weight;
			Union(parent, edges[i].source, edges[i].dest);
		}
	}
	
	
	printf("%d", sum);
	return 0;
	
	
}
