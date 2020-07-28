#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 0,t = 0;
	cin>>n;
	string p[1005][3];
	for(int i = 0; i < n; i++){
		string s1,s2;
		cin>>s1>>t>>s2;
		p[t][0]=s1;
		p[t][1] =s2;
	}
	cin>>n;
	for(int i = 0; i < n ;i++){
		cin>>t;
		cout<<p[t][0]<<" "<<p[t][1]<<endl;
	}
	return 0;
}
