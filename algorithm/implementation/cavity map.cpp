#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    char m[n][n];
    char ans[n][n];
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    int p, q;
    for(p=0;p<n;p++)
    {
        for(q=0;q<n;q++)
        {
            ans[p][q]=m[p][q];
        }
    }
    for(p=1;p<n-1;p++)
    {
        for(q=1;q<n-1;q++)
        {
            if(m[p-1][q]<m[p][q] && m[p+1][q]<m[p][q] && m[p][q-1]<m[p][q] && m[p][q+1]<m[p][q])
            {
                ans[p][q]='X';
            }
         
        }
    }
    int k, l;
    for(p=0;p<n;p++)
    {
        for(q=0;q<n;q++)
        {
            cout<<ans[p][q];
        }
        cout<<"\n";
    }
    return 0;
}
