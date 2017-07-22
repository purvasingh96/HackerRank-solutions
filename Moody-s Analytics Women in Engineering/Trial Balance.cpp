#include<iostream>
#include<stdlib.h>
using namespace std;

int check(int avg, int sumdeb, int sumcred)
{
	if(sumdeb<avg||sumcred>avg)
	{
		return 0;
	}
	return 1;
}

int comparedec (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
} 
int compareinc (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
} 
int main()
{
	int d, c;
	cin>>d>>c;
	int deb[d], cred[d], sumdeb=0, sumcred=0;
	int i, j;
	for(i=0;i<d;i++)
	{
		cin>>deb[i];
		sumdeb+=deb[i];
	}
	for(j=0;j<c;j++)
	{
		cin>>cred[j];
		sumcred+=cred[j];
	}
	for(j=d-c;j<d;j++)
	{
		cred[j]=0;
	}
	int avg = (sumcred+sumdeb)/2;
	qsort(deb, d, sizeof(int), comparedec);
	qsort(cred, d, sizeof(int), compareinc);
	//cout<<"after sorting : \n";
//	for(i=0;i<d;i++)
//	{
//		cout<<deb[i]<<" ";
//	}
	//cout<<"\n";
//	for(j=0;j<d;j++)
//	{
//		cout<<cred[j]<<" ";
//	}
	int k=0, count=0;
	//cout<<"sumcred: "<<sumcred<<"sumdeb: "<<sumdeb;
	int temp1 = sumdeb;
	int temp2 = sumcred;
	//cout<<"avg: "<<avg;
	while(k<d)
	{
		if(temp1>temp2)
		{
			temp1 = temp1 -(deb[k]-cred[k]);
		temp2 = temp2 + (deb[k]-cred[k]);
		//cout<<"temp1: "<<temp1<<"temp2: "<<temp2<<"\n";
		if(check(avg, temp1, temp2)==0)
		{
			//cout<<"less than avg";
			temp1 = temp1 + (deb[k]-cred[k]);
			temp2 = temp2 - (deb[k]-cred[k]);
			//cout<<"temp1: "<<temp1<<"temp2: "<<temp2;
			k++;
		}
		else if(temp1==avg|| temp2==avg){
			//cout<<"final\n";
			if(cred[k]==0)
			{
				//cout<<"cred 0";
				count=count+1;
			}
			else{
				//cout<<"cred not 0";
				count=count+2;
			}
			break;
		}
		else{
			//cout<<"greater than avg\n";
			k++;
			if(cred[k]==0)
			{
				//cout<<"cred 0";
				count=count+1;
			}
			else{
				//cout<<"cred not 0";
				count=count+2;
			}
			//count++;
		}
			
		}
		else if(temp1<=temp2)
		{
		temp1 = temp1 +(deb[k]-cred[k]);
		temp2 = temp2 - (deb[k]-cred[k]);
		//cout<<"temp1: "<<temp1<<"temp2: "<<temp2<<"\n";
		if(check(avg, temp1, temp2)==0)
		{
			//cout<<"less than avg";
			temp1 = temp1 - (deb[k]-cred[k]);
			temp2 = temp2 + (deb[k]-cred[k]);
			//cout<<"temp1: "<<temp1<<"temp2: "<<temp2;
			k++;
		}
		else if(temp1==avg|| temp2==avg){
			//cout<<"final\n";
			if(cred[k]==0)
			{
				//cout<<"cred 0";
				count=count+1;
			}
			else{
				//cout<<"cred not 0";
				count=count+2;
			}
			break;
		}
		else{
			//cout<<"greater than avg\n";
			k++;
			if(cred[k]==0)
			{
				//cout<<"cred 0";
				count=count+1;
			}
			else{
				//cout<<"cred not 0";
				count=count+2;
			}
			//count++;
		}
		}
		
	}
	cout<<abs(temp1-temp2)<<" "<<count;
}
