#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2,s3;
	cin>>s1>>s2;
	int point1 =0, point2 = 0;
	int judge[s1.length()];
	while(point2<=s2.length()) {
		if(s1[point1]!=s2[point2]) {
			point1++;
		} else {
			judge[point1] = 1;
			point1++;
			point2++;
		}
	}
	for(int i = 0; i < s1.length(); i++) {
		int flag = 0;
		if(judge[i]!=1) {
			for(int j =0; j < s3.length(); j++) {
				if(s1[i]==s3[j]) {
					break;
					flag =1;
				}
				if(s1[i]>='a'&&s1[i]<='z'&&(char)(s1[i]-('a'-'A'))==s3[j]) {
					break;
					flag = 1;
				}
				if(s1[i]>='A'&&s1[i]<='Z'&&s1[i]==s3[j]) {
					break;
					flag =1;
				}
			}
			if(flag!=1) {
				if(s1[i]>='a'&s1[i]<='z') {
					s3+=(char)(s1[i]-('a'-'A'));
				} else {
					s3+=s1[i];
				}
			}
			cout<<"######################"<<endl;
			for(int i = 0; i< s3.length(); i++) {
				cout<<s3[i];
			
			}
				cout<<"######################"<<endl;
		}
	}
	for(int i = 0; i< s3.length(); i++) {
		cout<<s3[i];
	}

	return 0;
}
