#include<bits/stdc++.h>
using namespace std;
///先分别把每一位的数字记录下来，再分别用for循环进行打印 
int main() {
	int n,i = 0;
	cin>>n;
	int b[3]= {0};
	while(n!=0) {
		b[i++]=n%10;
		n =n/10;
	}
	for(int k = 0; k < b[2]; k++) {
		cout<<"B";
	}
	for(int k = 0; k < b[1]; k++) {
		cout<<"S";
	}
	for(int k = 0; k < b[0]; k++) {
		cout<<(k+1);
	}
	return 0;
}
