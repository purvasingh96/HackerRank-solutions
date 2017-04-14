#include<iostream>
#include<queue>
using namespace std;

int mincost(long arr[], long n, long k){
	//minheap
	priority_queue<long, vector<long>, greater<long> > pq(arr, arr+n);
	
	long res=0, c=0;
	while(pq.top()<k && pq.size()>1){
		long first= pq.top();
		pq.pop();
		long second = pq.top();
		pq.pop();
		
		res= first+2*second;
		pq.push(res);
	
		c=c+1;
		
			}
    if(pq.top()<k){
        c=-1;
    }
				return c;
			
}
int main()
{
	long n, k, s=0;
	scanf("%ld %ld", &n, &k);
	long i, a[n];
	for(i=0;i<n;i++){
		scanf("%ld", &a[i]);
	}
		int op = mincost(a, n, k);
	cout<<op;
	
	
    return 0;
}
