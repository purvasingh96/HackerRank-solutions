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
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector<int> row(n, 0);
        vector<int> col(n, 0);
        vector< vector<int> > M(n,vector<int>(n));
        for(int M_i = 0;M_i < n;M_i++){
           for(int M_j = 0;M_j < n;M_j++){
              cin >> M[M_i][M_j];
               row[M_i]+=M[M_i][M_j];
               col[M_j]+=M[M_i][M_j];
           }
        }
        sort(row.begin(), row.end());
        sort(col.begin(), col.end());
        if(row==col)
        {
            cout<<"Possible"<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
        // your code goes here
    }
    return 0;
}
