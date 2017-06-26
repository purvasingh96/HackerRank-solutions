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
using namespace std;


int main()
{
    int i=0,j=0,arr[6][6];
    for(i=0;i<6;i++)
    {
       for(j=0;j<6;j++)
       {
          cin>>arr[i][j];
       }
    }
    double heighest=-63,sum=0;
    for(i=0;i<4;i++)
        {
        for(j=0;j<4;j++)
            {
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>heighest)
                heighest=sum;
            }
        }
    cout<<heighest;
    return 0;
}
