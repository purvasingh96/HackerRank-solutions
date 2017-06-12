#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
	return a.second < b.second;
}

int twinArrays(vector <int> ar1, vector <int> ar2){
    // Complete this function
    int min = INT_MAX, sum=0;
    int i, j=0;
    vector<pair<int, int> > index1;
    for(i=0;i<ar1.size();i++){
    	index1.push_back(make_pair(i, ar1[i]));
	}
	sort(index1.begin(), index1.end(), sortbysec);
	
	vector<pair<int, int> > index2;
    for(j=0;j<ar2.size();j++){
    	index2.push_back(make_pair(j, ar2[j]));
	}
	sort(index2.begin(), index2.end(), sortbysec);
	int k;
	for(k=0;k<index1.size()-1;k++){
		if(index1[k].first!=index2[k].first){
		
			sum= index1[k].second+index2[0].second;
	
		
		}
		else{
			if(k==0){
				sum= index1[k].second+index2[k+1].second;	
				
			}
			else{
				sum= index1[k].second+index2[0].second;	
			}
			
		}
		if(sum<min){
			min=sum;
	}
	}

	return min;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar1(n);
    for(int ar1_i = 0; ar1_i < n; ar1_i++){
       cin >> ar1[ar1_i];
    }
    vector<int> ar2(n);
    for(int ar2_i = 0; ar2_i < n; ar2_i++){
       cin >> ar2[ar2_i];
    }
    int result = twinArrays(ar1, ar2);
    cout << result << endl;
    return 0;
}
