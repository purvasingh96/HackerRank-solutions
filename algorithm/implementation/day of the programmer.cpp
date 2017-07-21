#include <bits/stdc++.h>
#include<string.h>
using namespace std;

string solve(int year){
    // Complete this function
    //int sum=215, diff;
    string result;
    if(year>=1700 && year<=1917)
    {
    	//cout<<"julian calender";
    	if(year%4==0)
    	{
    		//cout<<"julian and leap year";
    		result = "12.09."+to_string(year);
		}
		else{
			//cout<<"julian and not leap";
			result = "13.09."+to_string(year);
		}
	}
	else if(year==1918)
	{
		return "26.09.1918";
	}
	else 
	{
		if(year%400==0 || (year%4==0 && year%100!=0))
		{
			//cout<<"georgian and leap";
			result = "12.09."+to_string(year);
		}
		else {
			//cout<<"georgian and nor leap";
			result = "13.09."+to_string(year);
		}
	}
	return result;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
