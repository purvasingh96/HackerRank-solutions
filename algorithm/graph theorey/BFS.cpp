#include<iostream>
#include<list>
#include<vector>
#define pb push_back

using namespace std;

int adj[1009][1009];

int main()

{

int t,n,m,x,y,s,i,k, j;
cin>>t;
while(t--)
{
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            adj[i][j]=0;
        }
    }

    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        adj[x][y]=1;
        adj[y][x]=1;
    }
    cin>>s;
    int vis[n];
    for(i=1;i<=n;i++){
        vis[i]=0;
    }
    int dist[n];
    for(j=1;j<=n;j++){
        dist[j]=0;
    }
    list<int>q;
    q.push_back(s);
    vis[s]=1;
    dist[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop_front();
        vis[u]=1;
        for(k=1;k<=n;k++)
        {

            if(!vis[k] && adj[u][k]==1)
            {
                vis[k]=1;
                dist[k]=dist[u]+6;
                q.push_back(k);
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i!=s)
        {
            if(dist[i]==0)
            cout<<"-1 ";
            else
            cout<<dist[i]<<" ";
        }
    }
    cout<<endl;
}
return 0;
}
