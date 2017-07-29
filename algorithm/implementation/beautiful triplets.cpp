#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i, j, k;
    int n, d;
    cin>>n>>d;
    int a[n];
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count = 0;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            
            for(k=j+1;k<n;k++)
            {
            	//cout<<"a["<<i<<"]: "<<a[i]<<", a["<<j<<"]: "<<a[j]<<"a["<<k<<"]: "<<a[k]<<"\n\n";
            	//cout<<"a["<<j<<"]-a["<<i<<"]: "<<a[j]-a[i]<<"d: "<<d<<"\n\n";
                if(a[j]-a[i]!=d)
            	{
            		//cout<<"a[j]-a[i] is not equal to d\n";
               		 break;
           	    }
                else if((a[j]-a[i]==a[k]-a[j] ) && (a[j]-a[i])==d && (a[k]-a[j])==d)
                {
                	//cout<<"match\n";
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}
