#include<bits/stdc++.h>
using namespace std;
double a[111111];
int main(){
	int n;
	cin>>n;
	float save;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		int index = i+1;
		long long  sum1 = (n+(n-i))*index*0.5;
		long long sum2 = i*0.5*(1+i);
		long long sum = sum1 -sum2;
		save+=a[i]*1.0*sum;
	}
	printf("%.2f",save);
	return 0;
}
