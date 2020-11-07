#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a > b;
}
int main(){
	int n;
	cin>>n;
	int a[n+1] = {0};

	for(int i = 1; i < n+1; i++){
		cin>>a[i];
	}
	sort(a+1, a+n+1, cmp);
	int cut = 0;
	int p = 1;
	while(cut<=n&&a[p]>p){
		cut++;
		p++;
	}
	cout<<cut<<endl;
	return 0;
}
