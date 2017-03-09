#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* ShortestPath(int** Graph ,unsigned int StartNode);
int minDistance(int** Graph,int* ShortestPath);
int AllVisited();
int visited[3001];
unsigned int N;
int i, j, k;
#define MAX_LENGTH 4000

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    unsigned int T,E,StartNode;
    unsigned int x,y,length;     //counters
    int** Graph;                 // Graph is a 2-D array representing edge weights - dynamically allocated 
    int* NodesPath;              // Array containing each node 's shortest distance from StartNode
   
    
    scanf("%d",&T);
    for( i=0;i<T;i++)
    {
       //malloc for 2-D array 
        scanf("%d",&N);
                
        Graph =(int**)malloc((N+1)*sizeof(int*)) ;
        if(Graph==NULL)
            {
            printf("Error Allocating memory\n");
            exit(1);
        }
         
       //N rows
       for( i=0;i<N+1;i++)
          {
          Graph[i]=(int*)calloc(N+1,sizeof(int));
           if(Graph[i]==NULL)
               {
                printf("Error Allocating memory\n");
            exit(1);
           }
        }
            
        //make entries in the 2-D array adjacency matrix for edges
        scanf("%d",&E);
      //Re-initialize for new test case
       for( i=1;i<N+1;i++)
       {
            //mark all shortestpath vertices visited as false
            visited[i]=0;
        }
        for( j=0;j<E;j++)
            {
            scanf("%d",&x);
            scanf("%d",&y);
            scanf("%d",&length);
            if((Graph[x][y]==0)||(Graph[x][y]>length))
           { 
            Graph[x][y]=length;
            Graph[y][x]=length; 
            }//undirected edges so symmetric adjacency matrix
        }
         for( i=1;i<N+1;i++)
       {
        for( j=1;j<N+1;j++)
        {
          //  printf("%d ",Graph[i][j]);
        }
          //   printf("\n");
         }
        scanf("%d",&StartNode);
       
  
        NodesPath= ShortestPath(Graph,StartNode);
        for( i=1;i<N+1;i++)
     {
          //problem wants -1 to be printed for unreachable nodes
          if(NodesPath[i]==MAX_LENGTH)
          {
              NodesPath[i] =-1;
          }
     }
        for( i=1;i<N+1;i++)
            {
             if(i==StartNode)
             {
                 //skip 
             }
            else
            {
                printf("%d ",NodesPath[i]);
            }
        }
        printf("\n");
   
    for( i=0;i<N+1;i++)
       {
         free(Graph[i]);
       }
       free(Graph);
    }
    return 0;
}

int* ShortestPath(int** Graph , unsigned int StartNode)
{ 
    int node;
    int* ShortestPath=(int*)calloc(N+1,sizeof(int));
  
    //initialization of all distances other than startNode to a very high value
    for( i=1;i<N+1;i++)
     {
          ShortestPath[i]= MAX_LENGTH;
     }
    ShortestPath[StartNode]=0;
  
   for( k=1;k<N+1;k++)
  {
    node = minDistance(Graph,ShortestPath) ;
    visited[node]=1;
    
    //update the value of all adjacent vertices of new discovered node 
    for( i=1;i<N+1;i++)
    {
        if(Graph[node][i])            //an edge exists, ie adjacent vertex is present 
        {
            if(ShortestPath[i]>(ShortestPath[node]+Graph[node][i]))
            {
                ShortestPath[i]=ShortestPath[node]+Graph[node][i];
            }
        }
    }
   }
    return ShortestPath;
       
} //End of shortest path function 
   
int minDistance(int** Graph,int* ShortestPath)
{
    int min=MAX_LENGTH,min_index;   //initialize to a high value 
    for( i=1;i<=N;i++)
    {
         if((ShortestPath[i]<min) && (visited[i]!=1))
             {
                 min=ShortestPath[i];
                 min_index=i;
             }
         
    }
    return min_index;
    
}


