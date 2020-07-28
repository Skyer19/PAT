#include<bits/stdc++.h>
using namespace std;

int main() {
	int store[333]={0};
	string s1, s2;
	getline(cin,s1);
	getline(cin,s2);
	for(int i = 0; i < s1.length(); i++) {
		store[s1[i]]++;
	}
	int result = 0;
	for(int i = 0; i < s2.length(); i++) {
		if(store[s2[i]]>0) {
			store[s2[i]]--;
		} else {
			result++;
		}
	}
	if(result!=0) {
		cout<<"No"<<" "<<result<<endl;
	} else {
		cout<<"Yes"<<" "<<s1.length()-s2.length()<<endl;
	}
	return 0;

}
