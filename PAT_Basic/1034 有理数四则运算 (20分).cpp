#include<bits/stdc++.h>
using namespace std;
long long a, b, c, d;

long long gcd(long long t1, long long t2) {
	return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}
void func(long long m, long long n) {
	//判断是分子为零还是分母为零
	if(m*n ==0) {
		printf("%s", n == 0 ? "Inf" : "0");
		return;
	}
	//判断分数的符号
	bool flag = ((m < 0&n > 0)||(m> 0&n<0));
	m = abs(m);
	n = abs(n);
	long long x = m/n;
	//如果为负数，输出"(-"
	printf("%s", flag ? "(-" : ""); 
	//如果有整数位，输出整数位	
	if (x != 0) printf("%lld", x);
	//如果该分数当且仅当能用一个整数来表示
	if (m % n == 0) { 
		if(flag) printf(")");  
		return;
	}	
	//带分数整数位与最简分数中间的空格
	if (x != 0) printf(" ");	
	//分子减去已经提取出的整数部分
	m = m - x * n; 	
	//找目前分数分子和分母的最大公因数
	long long t = gcd(m, n);	
	//最简分子
	m = m / t;	
	//最简分母
	n = n / t;	
	//输出m/n   如果为负
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
