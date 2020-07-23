#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin>>num;
	while(num--){
		string s;
		int p = 0, t = 0;
		cin>>s;
		map<char,int>m;
		for(int j = 0; j < s.length(); j++){
			m[s[j]]++;
			if(s[j]=='P') p = j;
			if(s[j]=='T') t =j;
		}
		if(m['P']==1&&m['A']!=0&&m['T']==1&&m.size()==3&&t - p !=1&& p*(t-p-1)==s.length()-t-1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
	
}
