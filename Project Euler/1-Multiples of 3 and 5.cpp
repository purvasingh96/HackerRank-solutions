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
    long t;
    cin >> t;
    for(long a0 = 0; a0 < t; a0++){
        long n;
        long sum_three=0, sum_five=0, total=0,sum_15=0;
        cin >> n;
        long num_three = (n-1)/3; 
        sum_three = num_three*((3*num_three)+3)/2 ;
        long num_five = (n-1)/5;
        sum_five = num_five*((5*num_five)+5)/2;
        long num_15 = (n-1)/15;
        sum_15 = num_15 *((15*num_15)+15)/2;
        total = sum_three + sum_five - sum_15;
        cout<<total<<"\n";
    }
    
    return 0;
}
