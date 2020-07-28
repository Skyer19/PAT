#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int a[27]={0};
	 for(int i = 0; i < s.length(); i++){
	 	if(islower(s[i])){
	 		a[s[i]-'a']++;
		 }else if(isupper(s[i])){
		 	a[tolower(s[i])-'a']++;
		 }
	 }
	 int j = 0;
	 int max = 0;
	 for(int i = 0; i < 27; i++){
	 	if(a[i]>max){
	 		max = a[i];
	 		j = i;
		 }
	 }
	 cout<<char(j+'a')<<" "<<max<<endl;
	 return 0;
}
