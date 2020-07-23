#include<bits/stdc++.h>
using namespace std;
long long num = 0;
int cut = 0;
stack <int> q;
int main() {
//	string s;
//	cin>>s;
//	for(int i = 0; i<s.length(); i++) {
//		num+=int(s[i]-'0');
//	}
//	while(num) {
//		q.push(num%10);
//		num/=10;
//	}
//	while(!q.empty()) {
//		switch(q.top()) {
//			case (0):
//				cout<<"ling";
//				break;
//			case (1):
//				cout<<"yi";
//				break;
//			case (2):
//				cout<<"er";
//				break;
//			case (3):
//				cout<<"san";
//				break;
//			case (4):
//				cout<<"si";
//				break;
//			case (5):
//				cout<<"wu";
//				break;
//			case (6):
//				cout<<"liu";
//				break;
//			case (7):
//				cout<<"qi";
//				break;
//			case (8):
//				cout<<"ba";
//				break;
//			case (9):
//				cout<<"jiu";
//				break;
//		}
//		if(q.size()!=1) {
//			cout<<" ";
//		}
//		q.pop();
//	}
	string s;
	cin>>s;
	int sum  = 0;
	string str [10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for(int i = 0; i < s.length();i ++){
		sum+=(s[i]-'0');
	}
	string num = to_string(sum);
	for(int i =0; i < num.length(); i++){
		if(i!=0){
			cout<<" ";
		}
		cout<<str[num[i]-'0'];
	}
	return 0;
}




