#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	stack<string> s;
	while(cin>>str) s.push(str);
	cout<<s.top();
	s.pop();
	while(!s.empty()) {
		cout<<" "<<s.top();
		s.pop();
	}
	return 0;
}
