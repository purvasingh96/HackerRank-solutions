#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int dr, mr, yr, de, me, ye;
    cin>>dr>>mr>>yr;
    cin>>de>>me>>ye;
    int fine=0;
    if(dr<=de && mr<=me && yr==ye)
    {
        fine=0;
    }
    else if(dr>de && mr<=me && yr==ye)
    {
        fine = 15*(dr-de);
    }
    else if(mr>me && yr==ye)
    {
        fine = 500*(mr-me);
    }
    else if(yr>ye)
    {
        fine = 10000;
    }
    
    cout<<fine;
       
    return 0;
}
