# include<bits/stdc++.h>
using namespace std;

int main(){
//	int n;
//	cin>>n;
//	char a,b,c,d;
//	for(int i = 0; i < n; i++){
//		scanf("A-%c B-%c C-%c D-%c",&a,&b,&c,&d);
//		cout<<a<<b<<c<<d;
//		if(a=='T') cout<<1;
//		if(b=='T') cout<<2;
//		if(c=='T') cout<<3;
//		if(d=='T') cout<<4;
//	}
//	return 0;

	string s;
	while(cin>>s){
		if(s[2]=='T'&&s.size()==3)
			cout<<(s[0]-'A'+1);
	}
	return 0;
}
