# include<bits/stdc++.h>
using namespace std;

int m, n, s;
string temp;
bool flag = false;

int main() {
	string temp;
	map<string,int> map_1;
	cin>>m>>n>>s;

	for(int i =1; i <= m; i++) {
		cin>>temp;
		if(map_1[temp]==1) s = s + 1;
		if(i == s &&map_1[temp]==0) {
			map_1[temp] =1;
			cout<<temp<<endl;
			flag =true;
			s = s + n;

		}
	}
	if(flag == false) cout<<"Keep going..."<<endl;

	return 0;
}
