#include <bits/stdc++.h>

using namespace std;

string solve(vector < int > a){
    // Complete this function
    int n = a.size();
    int newsize = n+2;
    int b[newsize];
    b[0]=0;
    b[n-1]=0;
    int i, j=1;
    for(i=0;i<n;i++)
    {
        b[j]=a[i];
        ++j;
    }
    int k;
    int totalsum=0;
    for(k=1;k<newsize-1;k++)
    {
        totalsum+=b[k];
    }
    
    int sumleft=0, sumright=totalsum-b[1];
    for(k=1;k<newsize;k++)
    {
        sumleft+=b[k-1];
        if(k!=1)
        {
            sumright=totalsum-b[k]-sumleft;
        }
        if(sumleft == sumright)
        {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}
