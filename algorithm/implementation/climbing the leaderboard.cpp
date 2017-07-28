#include<iostream>
#include<map>
using namespace std;

int main()
{
	multimap<long, long> mymap;
	long n, score, prevscore;
	cin>>n;
	long i=1;
	long t=n;
	while(n>0)
	{
		cin>>score;
		if(i!=1)
		{
			if(score==prevscore)
			{
				mymap.insert(pair<long , long>(i-1, score));;
			}
			else{
				mymap.insert(pair<long , long>(i, score));;	
				++i;
			}
		}
		else{
			mymap.insert(pair<long , long>(i, score));;
			++i;
		}
		prevscore=score;
		--n;		
	}
	long alicen;
	cin>>alicen;
	long alicescore;
	multimap<long, long>:: reverse_iterator it;
		//cout<<"rank"<<" "<<"score\n";
	
//	for(it=mymap.begin();it!=mymap.end();++it)
//		{
//			cout<<it->first<<" "<<it->second<<"\n";
//		}
it=mymap.rbegin();
while(alicen>0)
{
	
	//cout<<"array: "<<it->first<<" "<<it->second<<"\n";
	cin>>alicescore;
	long count = 0;
	if(alicescore<it->second)
	{
		//cout<<"aice sccore is lowest\n";
		cout<<it->first+1;
	}
	else if(alicescore==it->second)
	{
		cout<<it->first;
	}
	else
	{
		while(it->second<=alicescore && count!=t)
		{
			++it;
			++count;
		}
		if(count==t)
		{
			//cout<<"aice sccore is highest\n";
			cout<<"1";
		}
		else
		{
			cout<<it->first+1;
		}
	}
	--alicen;
	cout<<"\n";
}
	
	
}
