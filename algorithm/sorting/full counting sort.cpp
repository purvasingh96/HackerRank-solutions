#include<iostream>
#include<map>
#include<string>
//using namespace std;
int main(){
	std::multimap<int, std::string, std::less<int> > mymap;
	
	std::multimap<int, std::string>::key_compare mycompare = mymap.key_comp();
	int i, n;
	std::cin>>n;
	int key;
	std::string value;
	for(i=0;i<n;i++){
		std::cin>>key;
		std::cin>>value;
		if(i<n/2){
			value="-";
		}
		mymap.insert(std::pair<int, std::string>(key, value));
	}
	std::multimap<int, std::string>::iterator it;
	//std::cout<<"------------------------------------------------------\n";
	for(it=mymap.begin(); it!=mymap.end(); ++it){

		std::cout<<it->second<<" ";
	}
	return 0;
	
}
