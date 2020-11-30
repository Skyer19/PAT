# include<bits/stdc++.h>
using namespace std;
//Ë«Ö¸ÕëÎÊÌâ 
int main() {
	int n = 0, j = 0;
	string s;
	cin>>s>>n;
	for(int k = 1; k < n; k++) {
		string t;
		for(int i = 0; i < s.length(); i = j) { 
			j = i;   
			while(s[j] == s[i]) j++;
			t += s[i] + to_string(j - i);		
		}
		s = t;
	}
	cout<<s;
	return 0;
}

