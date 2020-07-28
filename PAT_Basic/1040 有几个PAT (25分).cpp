#include<bits/stdc++.h>
using namespace std;
long long countp, countt, result;
int main() {
	string s;
	cin>>s;
	for(int i = 0; i < s.length(); i++) {
		if(s[i]=='T') {
			countt++;
		}
	} 
	for(int i = 0; i < s.length(); i++) {
		if(s[i]=='P') {
			countp++;
		}
		if(s[i]=='T') {
			countt--;
		}
		if(s[i]=='A') {
			result =  ((countp*countt)%1000000007+result)%1000000007; //两次模上1000000007 
		}
	}
	cout<<result<<endl;
	return 0;
}
