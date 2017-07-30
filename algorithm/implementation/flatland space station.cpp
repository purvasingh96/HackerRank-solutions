#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int exists(int a[], int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    int spacestationindex[m];
    int i;
    for(i=0;i<m;i++)
    {
        cin>>spacestationindex[i];
    }
    int d, t;
    int j, k=0, mindist=INT_MAX;
    int distance[n];
    for(j=0;j<n;j++)
    {
        mindist=INT_MAX;
        for(t=0;t<m;t++)
        {
         if(abs(spacestationindex[t]-j)<mindist)
         {
             mindist= abs(spacestationindex[t]-j);
         }
        }
        distance[k]=mindist;
        ++k;
    }
    int q, max=-1;
    for(q=0;q<k;q++)
    {
        if(distance[q]>max)
        {
            max=distance[q];
        }
    }
    cout<<max<<endl;
    
    return 0;
}
