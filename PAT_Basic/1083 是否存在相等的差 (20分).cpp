# include<bits/stdc++.h>
using namespace std;

int n;
int a[100003] = {0};
int main(){
	cin>>n;
	for(int i = 1; i <= n; i++){
		int num;
		cin>>num;
		a[abs(num-i)]++;
	}
	for(int i = n; i >= 0; i--){
		if(a[i]>1){
			cout<<i<<" "<<a[i]<<endl;
		}
	}
	return 0;
}
