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
    long long sum=0LL;
    cin >> t;
    long long i, p;
        bool prime[10000000];
        memset(prime, true, sizeof(prime));
        for(p=2;p*p<=10000000;p++)
        {
            if(prime[p]==true){
                for(i=2*p;i<=10000000;i+=p)
                    {
                        prime[i]=false;
                    }
            }
            
        }
        
    for(int a0 = 0; a0 < t; a0++){
        sum=0LL;
        long n;
        cin >> n;
        for(p=2;p<=n;p++)
        {
            if(prime[p] && p<=n)
            {
                sum+=p;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
