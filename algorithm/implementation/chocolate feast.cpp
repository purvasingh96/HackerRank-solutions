#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, wrappers=0, choclates=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        choclates=0;
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        wrappers = n/c;
        choclates = n/c;
        while(wrappers >= m)
        {
            wrappers = wrappers-m+1;
            choclates = choclates+1;            
        }
        
        cout<<choclates<<endl;
    }
    return 0;
}
