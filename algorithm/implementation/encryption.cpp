#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    int i, j, col;
    auto n = s.size();
    int row = round(sqrt(n));
    if(row>sqrt(n))
    {
        col=row;
    }
    else{
        col=row+1;
    }
    for(j=0;j<col;j++)
    {
        for(i=j;i<n;i+=col)
        {
            cout<<s[i];
        }
        cout<<" ";
    }
    return 0;
}
