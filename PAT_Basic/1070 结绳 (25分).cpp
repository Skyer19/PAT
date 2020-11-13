# include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin>>n;
	vector<int> v;
	
	for(int i = 0; i < n; i++){
		scanf("%d",&v[i]);
	}
	
	sort(v.begin(),v.end());
	
	int result = v[0];
	
	for(int i = 1; i < n; i++){
		result = (result + v[i])/2;
	}
	cout<<result<<endl;
	return 0;
}
