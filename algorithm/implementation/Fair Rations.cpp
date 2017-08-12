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
int checkalleven(int a[], int n)
{
    int i, flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    return flag;
}

int main(){
    int n;
    cin >> n;
    int  b[n];
    for(int B_i = 0;B_i < n;B_i++){
       cin >> b[B_i];
    }
    int count=0;
    int k, index;
    if(checkalleven(b, n))
    {
        cout<<"0";
    }
    else{
        for(k=0;k<n;k++)
            {
                if(b[k]%2!=0)
                {
                    index=k;
                    ++b[index];
                    ++count;
                    if( index!=0 && b[index-1]%2!=0 )
                    {
                        ++b[index-1];
                        ++count;
                    }
                    else if (b[index+1]%2!=0 && index!=0 && index!=n-1)
                    {
                        ++b[index+1];
                        ++count;
                    }
                    else if(index==n-1)
                    {
                        ++b[index-1];
                        ++count;
                    }
                    else
                    {
                        ++b[index+1];
                        ++count;
                    }
                }
            }
        /*int j;
        for(j=0;j<n;j++)
        {
            cout<<b[j]<<" ";
        }*/
        if(checkalleven(b, n))
        {
            cout<<count;   
        }
        else{
            cout<<"NO";
        }
    }
    
    return 0;
}
