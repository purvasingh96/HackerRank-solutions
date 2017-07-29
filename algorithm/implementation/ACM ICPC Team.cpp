#include<iostream>
using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	string s[n];
	int finalarray[500000];
	int w=0;
	int i;
	//cin>>s;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	int j, maxor=-1, p=0, count=0, knowntopicstobothteams=0, winningteam=0;
	bool res;
	
	for(i=0;i<n-1;i++)
	{
		//cout<<"i: \n"<<i;
		for(j=i+1;j<n;j++)
		{
			p=0;
			res=0;
			knowntopicstobothteams=0;
			//cout<<s[i]<<" "<<s[j]<<"\n";
			while(p<k)
			{
				
				char t = s[i][p];
				char q = s[j][p];
				t=t-'0';
				q=q-'0';
				res = t|q;
				//cout<<"res: "<<res;
				if(res==1)
				{
					++knowntopicstobothteams;
				}
				++p;
			}
			finalarray[w++]=knowntopicstobothteams;
			
			//cout<<"knowntopicstobothteams: "<<knowntopicstobothteams<<"\n";
		}
	}
	int r;
	for(r=0;r<w;r++)
	{
		if(finalarray[r]>maxor)
		{
			maxor=finalarray[r];
		}
	}
	for(r=0;r<w;r++)
	{
		if(finalarray[r]==maxor)
		{
			++winningteam;
		}
	}
	cout<<maxor<<"\n";
	cout<<winningteam;
}
