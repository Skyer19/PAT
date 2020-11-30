# include<bits/stdc++.h>
using namespace std;

int main() {
	int m , n;
	cin>>m>>n;
	long long a[10005];
	for(int j = 0; j < n ; j++) {
		for(int i = 1; i <= m; i++) {
			int temp;
			cin>>temp;
			a[i] += temp;
		}
	}
	long long maxn = 0;
	for(int i = 1; i <= m; i++) {
		maxn = max(maxn,a[i]);
	}
	cout<<maxn<<endl;
	bool flag = false; 
	for(int i = 1; i <= m; i++) {
		if(!flag&&a[i]==maxn){
			flag = true;
			cout<<i;		
		}
		else if(a[i]==maxn) {
			cout<<" "<<i;
			
		}
	}
	return 0;
}
