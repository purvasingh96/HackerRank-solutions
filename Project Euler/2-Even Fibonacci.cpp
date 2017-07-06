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
        long n;
        cin >> n;
        long sum=2;
        long first=1;
        long second=2;
        long third=0;
        //n=n-2;
        while(third<=n)
        {
            third = first+second;
            if(third>n)
            {
                break;
            }
            //cout<<"third: "<<third<<"n: "<<n<<"\n";
            if(third%2==0)
            {
              sum+=third;  
            }
            
            first=second;
            second=third;
            
            
        }
        cout<<sum<<"\n";
        
    }
    return 0;
}
