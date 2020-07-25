#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	char sign,new_sign;
	sign = s[0];
	string plus_str,last_str;
	int j = 0;
	if(s == "0") {
		cout<<0;
		return 0;
	}
	for(int i = 1; i < s.length(); i++) {
		if(s[i]=='E') {
			j = i + 1;
			break;
		}
		plus_str+=s[i];
	}
	new_sign = s[j++];

	for(int i = j; i < s.length(); i++) {
		last_str+=s[i];
	}
	if(sign=='-') cout<<sign;

	if(new_sign=='+') {
		int length = stoi(last_str);
		int plus_str_length = plus_str.length()-2;
		if((length-plus_str_length)>=0) {
			for(int i = 0; i < plus_str.length(); i++) {
				if(plus_str[i]=='.') {
					continue;
				}
				cout<<plus_str[i];
			}
			for(int i = 0; i < length- plus_str_length ; i++) {
				cout<<0;
			}
		} else {
			for(int i = 0; i < plus_str.length(); i++) {
				if(plus_str[i]=='.') {
					continue;
				}
				cout<<plus_str[i];
				if(i ==length+1) {
					cout<<".";
				}
			}
		}

	} else if(new_sign=='-') {
		int length = stoi(last_str);
		for(int i = 0; i < length ; i++) {
			cout<<0;
			if(i==0) cout<<".";
		}
		for(int i = 0; i < plus_str.length(); i++) {
			if(plus_str[i]=='.') {
				continue;
			}
			cout<<plus_str[i];
		}
	}
	return 0;
}
