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
   int height;
    char i;
    map<char, int> mymap;
    map<char, int> mymap2;
    for(i='a';i<='z';i++)
    {
        cin>>height;
        mymap[i]=height;
    }
    string word;
    cin>>word;
    int j=0;
   int max =-1;
    int length = word.length();
    map<char, int> :: iterator it;
    for(it=mymap.begin();it!=mymap.end();++it)
    {
        for(j=0;j<length;j++)
        {
            if(it->first==word[j])
            {
                if(it->second>max)
                {
                    max=it->second;
                }
            }
        }
    }
    //cout<<length<<"\n";
    //cout<<max;
    cout<<length*max;
}
