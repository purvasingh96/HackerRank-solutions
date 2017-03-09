//bipartite graoh - no adjacent nodes should be of same color
#include<iostream>
#include<queue>
#define V 4
using namespace std;

bool isBipartite(int G[V][V], int src){
	int colors[V];
	int i;
	for(i=0;i<V;i++){
		colors[i]=-1;
	}
	colors[src]=1;
	queue<int> q;
	q.push(src);
	
	while(!q.empty()){
		int u=q.front();
		q.pop();
		int v;
		for(v=0;v<V;v++)
		{
			if(G[u][v] && colors[v]==-1){
				colors[v]= 1-colors[u];
				q.push(v);
			}
			else if(G[u][v] && colors[u]==colors[v]){
				return false;
			}
		}
	}
	return true;
}
int main()
{
    int G[][V] = {{0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}
    };
 
    isBipartite(G, 0) ? cout << "Yes" : cout << "No";
    return 0;
}
