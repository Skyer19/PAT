# include<bits/stdc++.h>
using namespace std;

int main(){
	
	int letter[5555];
	string a, b, s;
	getline(cin,a);
	getline(cin,b);
	s = a + b;
	
	for(int i = 0; i < s.size(); i++){
		if(letter[s[i]] == 0){
			letter[s[i]] =1;
			cout<<s[i];
		}
		
	}
	
	return 0;
}
