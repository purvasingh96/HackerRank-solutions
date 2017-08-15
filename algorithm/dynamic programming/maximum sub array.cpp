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

int compare(const void *a , const void *b)
{
    return *(int*)b - *(int*)a;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, maxsofar=INT_MIN, maxendhere= 0;
    int t;
    cin>>t;
    while(t--)
    {
        maxsofar=INT_MIN, maxendhere= 0;
        cin>>n;
        int a[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            maxendhere = maxendhere+a[i];
            if(maxsofar<maxendhere)
            {
                maxsofar=maxendhere;
            }
            if(maxendhere<0)
            {
                maxendhere=0;
            }
        }
        int j, noncontagious=0, max=INT_MIN;
        qsort(a, n, sizeof(int), compare);
        for(j=0;j<n;j++)
        {
            noncontagious+=a[j];
            if(noncontagious>max)
            {
                max=noncontagious;
            }
            else{
                break;
            }
        }
        cout<<maxsofar<<" "<<max<<endl;

    }
        return 0;
}
