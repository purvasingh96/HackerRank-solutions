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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, flag=0;
        cin >> n;
        long long max=-1, prod;
        int a, b, c;
        for(a=1;a<=n/3;a++)
        {
            b = ((n*n) - (2*n*a))/((2*n)-(2*a));
            c = n-a-b;
            
            if((c*c)==(a*a)+(b*b))
            {
                prod=a*b*c;
                if(prod>max)
                {
                    flag=1;
                    max=prod;
                }
            }
        }
        if(flag==1)
        {
            cout<<max<<"\n";
        }
        else{
            cout<<"-1"<<"\n";
        }
    }
    return 0;
}
