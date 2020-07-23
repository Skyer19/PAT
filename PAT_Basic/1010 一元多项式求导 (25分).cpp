#include<iostream>
//抄答案的
using namespace std;
int main() {
	int a,b,f=0;
	while(cin>>a>>b) {
		if(a==0 && b==0) {
			cout<<0<<" "<<0;
		}
		if(a!=0 && b!=0) {
			if(f==0)
				cout<<a*b<<" "<<b-1;
			else
				cout<<" "<<a*b<<" "<<b-1;
			f++;
		}
		if(a!=0 && b==0) { //单独的2 0输出也为0 0，如果2 0之前有其他的，则不用输出
			if(f==0)
				cout<<0<<" "<<0;
		}
	}
	return 0;
}
