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
    cin >> n;
    int i, a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int> mystack;
    for(i=0;i<n;i++){
        mystack.push(a[i]);
    }
    for(i=0;i<n;i++){
        cout<<mystack.top()<<" ";
        mystack.pop();
    }
    return 0;
}

