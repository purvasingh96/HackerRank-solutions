#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,la=0;
    cin>>n>>q;
    vector<int> v[n];
    for(int i=0;i<q;i++)
        {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==1)
            {
            v[(y^la)%n].push_back(z);
        }
        if(x==2)
            {
            int p=(y^la)%n;
            la=v[p][z%(v[p].size())];
            cout<<la<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
