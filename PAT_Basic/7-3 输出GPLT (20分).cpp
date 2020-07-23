#include<bits/stdc++.h>
using namespace std;
int a[4];
string s;
int main() {
	cin>>s;
	for(int i = 0; i < s.length(); i++) {
		if(s[i]=='G'||s[i]=='g') {
			a[0]++;
		}
		if(s[i]=='P'||s[i]=='p') {
			a[1]++;
		}
		if(s[i]=='L'||s[i]=='l') {
			a[2]++;
		}
		if(s[i]=='T'||s[i]=='t') {
			a[3]++;
		}
	}
	int m1 = max(a[0],a[1]);
	int m2 = max(a[2],a[3]);
	int m = max(m1,m2);
	while(m--) {
		if(a[0]!=0) {
			cout<<"G";
			a[0]--;
		}
		if(a[1]!=0) {
			cout<<"P";
			a[1]--;
		}
		if(a[2]!=0) {
			cout<<"L";
			a[2]--;
		}
		if(a[3]!=0) {
			cout<<"T";
			a[3]--;
		}
	}
	return 0;
}
