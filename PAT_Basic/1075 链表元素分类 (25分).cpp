# include<bits/stdc++.h>
using namespace std;

bool cmp(char a, char b){
	return a > b;
}
bool isPalin(string s){
	string s2;
	for(int i = s.size(); i >= 0; i--){
		s2 += s[i];
	}
	if(s ==s2) return true;
	return false;
}
int main(){
	string a, b, result;
	int cnt = 1;
	cin>>a;
	while(cnt <= 10){
		if(cnt == 10){
			cout<<"Not found in 10 iterations."<<endl;
			break;
		}
		for(int i = a.size(); i >= 0; i--){
			b += a[i];
		}
		cout<<stoi(a);
		
		string result = to_string(stoi(a) + stoi(b));
//		cout<<a<<" + "<<b<<" = "<<result<<endl;
		if(isPalin(result)){
			cout<<result<<" is a palindromic number."<<endl;
			break;
		}
		
		a = result;
		cnt++;
		
	}
	
	
}
