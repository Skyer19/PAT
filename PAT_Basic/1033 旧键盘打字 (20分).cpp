#include<bits/stdc++.h>
using namespace std;

int main(){
	string bad, should;
	getline(cin,bad);
	getline(cin,should);
	for(int i = 0; i < should.length(); i++){
		if(bad.find(toupper(should[i]))!=string::npos) continue;//坏除了英文字母以外的键或坏英文字母 
		if(isupper(should[i])&&bad.find('+')!=string::npos) continue; //只是大写不行，小写还是可以的 
		cout<<should[i];
	}
	return 0;
}
