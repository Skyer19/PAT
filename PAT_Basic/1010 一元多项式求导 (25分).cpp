#include<iostream>
//���𰸵�
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
		if(a!=0 && b==0) { //������2 0���ҲΪ0 0�����2 0֮ǰ�������ģ��������
			if(f==0)
				cout<<0<<" "<<0;
		}
	}
	return 0;
}
