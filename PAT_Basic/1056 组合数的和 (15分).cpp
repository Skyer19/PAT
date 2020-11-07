#include<bits/stdc++.h>
using namespace std;
int n,sum;

int main(){
	cin>>n;
	int a[n] ={0};
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n - 1; i ++){
		for(int j = i+1; j < n; j ++){
			int num1 = a[i]*10 +  a[j];
			int num2 = a[j] * 10 +  a[i];
//			cout<<num<<endl;
			sum += num1 + num2; 
		}
	}
	cout<<sum<<endl;
}
