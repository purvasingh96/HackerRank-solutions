#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, a, b;
        cin>>n>>a>>b;
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        else if(a==b)
        {
            cout<<(n-1)*a<<endl;
        }
        else if(a>b)
        {
            long long temp;
            temp=a;
            a=b;
            b=temp;
            long long i;
            --n;
            for(i=n;i>=0;i--)
              {
                long long sum=0;
                sum= (a*i)+((n-i)*b);
                cout<<sum<<" ";
              }
            cout<<"\n";
        }
        else{
            long long i;
            --n;
            for(i=n;i>=0;i--)
            {
                long long sum=0;
                sum= (a*i)+((n-i)*b);
                cout<<sum<<" ";
            }
            cout<<"\n";
        }
     }
    return 0;
}
