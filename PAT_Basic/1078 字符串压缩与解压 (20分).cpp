# include<bits/stdc++.h>
using namespace std;

char n;

int main(){
	cin>>n;
	getchar();
	string s, num;
	getline(cin,s);
	int cnt = 1;
	if(n=='D'){
		for(int i = 0 ; i < s.length(); i++){
			if(s[i]>='0'&&s[i]<='9'){
				num += s[i];
			}else{
				if(num.length() > 0) cnt = stoi(num);  // here is important!
				while(cnt--) cout<<s[i];
				cnt = 1;
				num ="";
			}
		}
	}else if(s.length()!=0){
		char pre =s[0];
		for(int i = 1; i < s.length(); i++){
			if(s[i] == pre){
				cnt++;
			}else{
				if(cnt >= 2) cout<<cnt;
				cout<<pre;
				cnt =1;
				pre = s[i];
			}
		}
		if(cnt>=2) cout<<cnt;
		cout<<pre;
	}
	return 0;
}
