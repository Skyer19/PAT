#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	int pa = 0,pb = 0,da,db;
	cin>>a>>da>>b>>db;
	for(int i = 0; i < a.length(); i++){
		if(da==(a[i]-'0')) pa = 10*pa+da;
	}
//	cout<<pa<<endl;
		for(int i = 0; i < b.length(); i++){
		if(db==(b[i]-'0')) pb = 10*pb+db;
	}
//	cout<<pb<<endl;
	cout<<pa+pb<<endl;
	return 0;
}
