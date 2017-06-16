#include<iostream>
#include<map>
using namespace std;
int main(){
string s;
cin>>s;
int i, x;
map<char, int> m;
for(i=0;i<s.length();i++){
	m[s[i]]+=1;
}	
map<char, int> :: iterator it;

for(it=m.begin();it!=m.end();++it){
	cout<<it->first<<" "<<it->second<<"\n";
}
for(it=m.begin();it!=m.end();++it){
	map<char, int>::iterator temp;
	temp=it;
	if(it->second==(++temp)->second){
		x = it->second;
	}
}
int c1=0, c2=0;
string flag = "NO";
cout<<"x: "<<x;
for(it=m.begin();it!=m.end();++it){
	if(it->second!=x){
		cout<<"entering case 1\n";
		if(it->second-1==0){
			cout<<"entering case 1.1\n";
			flag="YES";
			c1+=1;
			if(c1==2){
				flag=="NO";
				break;
			}
		}
		else if(it->second-1==x){
			cout<<"entering case 1.2\n";
			flag="YES";
			c2+=1;
			if(c2==2){
				flag="NO";
				break;
			}
		}
		else 
		{
			cout<<"entering case 1.3\n";
			flag="NO";
			break;
		}
	}
	else{
		flag="YES";
	}
}
if(flag=="YES"){
	cout<<"YES";
}
else{
	cout<<"NO";
}

}
