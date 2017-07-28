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


int main(){
    int n;
    int k;
    cin >> n >> k;
    int cloud[n];
    int i;
    int energy =100;
    for(i=0;i<n;i++)
    {
        cin>>cloud[i];
    }
   int j=0;
    while((j+k)%n!=0)
    {
        if(cloud[(j+k)%n]==0)
        {
            energy=energy-1;
        }
        else{
            energy=energy-3;
        }
        j=(j+k)%n;
    }
    if(cloud[0]==0)
    {
        cout<<energy-1;
    }
    else{
        cout<<energy-3;
    }
    
    return 0;
}
