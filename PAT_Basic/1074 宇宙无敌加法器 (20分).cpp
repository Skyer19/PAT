# include<bits/stdc++.h>
using namespace std;

string s, a, b, ans;
int flag = 0;

int main(){
	cin>>s>>a>>b;
	int len = s.length();
	ans =s;
	string ss1(s.length() - a.length(),'0');
	a = ss1 + a;
	string ss2(s.length() - b.length(),'0');
	b = ss2 +b;
	
	int c = 0;
	for(int i = len-1; i >= 0; i--){
		int bit = s[i] == '0'? 10:(s[i]-'0');
		int temp = (a[i]-'0'+b[i]-'0'+c);
		ans[i] = temp%bit +'0';
		c = temp/bit;

	}
	if(c!=0) ans = '1'+ans;
	for(int i = 0; i < ans.size(); i++){
		if(ans[i]!='0'||flag ==1){
			flag = 1;
			cout<<ans[i];
		}
	}
	if(flag == 0) cout<<0;
	return 0;
		
	
	
	
}
