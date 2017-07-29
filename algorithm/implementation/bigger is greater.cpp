#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    string s;
    while(t>0)
    {
        cin>>s;
        bool check = next_permutation(s.begin(), s.end());
        if(check)
        {
            cout<<s<<endl;
        }
        else{
            cout<<"no answer"<<endl;
        }
        t--;
    }
    return 0;
}
