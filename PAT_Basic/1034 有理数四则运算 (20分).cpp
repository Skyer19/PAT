#include<bits/stdc++.h>
using namespace std;
long long a, b, c, d;

long long gcd(long long t1, long long t2) {
	return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}
void func(long long m, long long n) {
	//�ж��Ƿ���Ϊ�㻹�Ƿ�ĸΪ��
	if(m*n ==0) {
		printf("%s", n == 0 ? "Inf" : "0");
		return;
	}
	//�жϷ����ķ���
	bool flag = ((m < 0&n > 0)||(m> 0&n<0));
	m = abs(m);
	n = abs(n);
	long long x = m/n;
	//���Ϊ���������"(-"
	printf("%s", flag ? "(-" : ""); 
	//���������λ���������λ	
	if (x != 0) printf("%lld", x);
	//����÷������ҽ�������һ����������ʾ
	if (m % n == 0) { 
		if(flag) printf(")");  
		return;
	}	
	//����������λ���������м�Ŀո�
	if (x != 0) printf(" ");	
	//���Ӽ�ȥ�Ѿ���ȡ������������
	m = m - x * n; 	
	//��Ŀǰ�������Ӻͷ�ĸ���������
	long long t = gcd(m, n);	
	//������
	m = m / t;	
	//����ĸ
	n = n / t;	
	//���m/n   ���Ϊ��
	printf("%lld/%lld%s", m, n, flag ? ")" : "");  	
}
int main() {
	scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
	func(a, b);
	printf(" + ");
	func(c, d);
	printf(" = ");
	func(a * d + b * c, b * d);
	printf("\n");
	func(a, b);
	printf(" - ");
	func(c, d);
	printf(" = ");
	func(a * d - b * c, b * d);
	printf("\n");
	func(a, b);
	printf(" * ");
	func(c, d);
	printf(" = ");
	func(a * c, b * d);
	printf("\n");
	func(a, b);
	printf(" / ");
	func(c, d);
	printf(" = ");
	func(a * d, b * c);
	return 0;
}
