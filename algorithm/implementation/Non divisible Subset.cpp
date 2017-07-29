#include <bits/stdc++.h>

using namespace std;

const int MAXM = 100;

int main()
{
    int n, m;
    cin>>n>>m;
    int i, num, a[1000];
    for(i=1;i<=n;i++)
    {
        cin>>num;
        ++a[num%m];
    }
    if(m%2==0)
    {
        a[m/2]=min(a[m/2], 1);
    }
    int res=0;
    for(i=1;i<=m/2;i++)
    {
        res+=max(a[i], a[m-i]);
    }
    res+=min(1, a[0]);
    cout<<res<<"\n";
    
}
