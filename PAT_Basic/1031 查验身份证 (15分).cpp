#include<bits/stdc++.h>
using namespace std;

int last[17]= { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
int t,s;
char c [11]={'1','0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int main() {
	cin>>t;
	int judge[t];
	string a[t];
	for(int j =0 ;j < t ;j ++) {
		cin>>a[j];
		for(int i = 0; i < 17; i++) {
			if(a[j][i]>'9'||a[j][i]<'0') {
				judge[j] = 1;
				break;
			}
		}
		if(judge[j]!=1) {
			int sum =0;
			for(int i = 0; i < 17; i++) {
				int temp =int(a[j][i]-'0');
				sum+=temp*last[i];
			}
			int z= sum%11;
			if(c[z]!=a[j][17]){
				judge[j] = 1;
			}
		}
}
        int flag =0;
		for(int j =0 ;j < t ;j ++) {
			if(judge[j]==1){
				cout<<a[j]<<endl;
				flag =1;
			}
	}
	if(flag==0){
		cout<<"All passed"<<endl;
	}
}
