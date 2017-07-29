#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<limits.h>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        int k, min=INT_MAX;
        for(k=i;k<=j;k++)
        {
            if(width[k]<=min)
            {
                min=width[k];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
