# include<bits/stdc++.h>
using namespace std;

int n;
double sum;

int main(){
	cin>>n;
	set<int> s;
	for(int i = 1; i <= n; i++){
		s.insert(i/2+i/3+i/5);
	}
	cout<<s.size()<<endl;
	return 0;
}
