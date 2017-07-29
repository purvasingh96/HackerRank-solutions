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
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        long cost=0;
        cin >> x >> y >> z;
        if(x>y+z)
        {
            x=y+z;
        }
        if(y>x+z)
        {
            y=x+z;
        }
        cost = b*x + w*y;
        cout<<cost<<"\n";
    }
    return 0;
}
