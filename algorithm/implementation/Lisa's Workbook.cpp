#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, max;
    cin>>n>>max;
    int i, j, k=1, t=max;
    int page[1000];
    int prob, previndex=1;
    int firsttime=0, count=0;
    for(i=1;i<=n;i++)
    {
        cin>>prob;
        previndex=1;
        firsttime=0;
        if(prob<=max)
        {
            page[k]=prob;
            for(j=1;j<=prob;j++)
            {
                if(j==k)
                {
                    ++count;
                    //index=j;
                    break;
                }
            }
            
        }
        
        else if(prob>max)
        {
            while(prob>max)
            {
                page[k]=max;
                if(firsttime==0)
                {
                    j=1;
                    while(page[k]--)
                    {
                        if(j==k)
                        {
                            ++count;
                            //index=j;
                            break;
                        }
                        ++j;
                    }
                }
                else{
                    
                    previndex=previndex+max;
                    j=previndex;
                    while(page[k]--)
                    {
                        if(j==k)
                        {
                            ++count;
                            //index=j;
                            break;
                        }
                        ++j;
                    }
                }
                prob=prob-max;
                ++k;
                firsttime=1;
                //t=t+max;
            }
            if(prob!=0)
            {
                page[k]=prob;
                j=max+previndex;
                while(page[k]--)
                {
                    if(j==k)
                    {
                        ++count;
                        //index=j;
                        break;
                    }
                    ++j;
                }
                
            }
        }
        ++k; 
    }
    cout<<count;
    return 0;
}
