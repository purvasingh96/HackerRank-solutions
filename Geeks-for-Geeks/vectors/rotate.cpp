#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    int i, n, t,te;

        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>t;
            v.push_back(t);
        }
        i=1;
         rotate(v.begin(),v.end()-1,v.end());
         for(i=0; i<n; i++)
        {
            cout<<v[i];

        }

        // 1 2 3 4 5
        // 5 1 2 3 4

return 0;
}

