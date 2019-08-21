#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long int> v;
    long long int i, n, t,te;
    cin>>te;
    while(te>0)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>t;
            v.push_back(t);
        }
        i=1;
        while(i<(n/2)+1)
        {
            rotate(v.begin(),v.end()-1,v.end());
            v.erase (v.begin()+(v.size()-i));
            i++;
        }
        cout<<v[0]<<endl;
        --te;
        v.clear();
    }
return 0;
}

