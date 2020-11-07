#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main() {
	int n1, m1, n2, m2, k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);

//	int m = m1*m2;
//
//
//	int n1_new = n1*m2;
//	int n2_new = n2*m1;
//
//	if( n1_new>n2_new ){
//		swap(n1_new, n2_new);
//	}
//
//	bool flag = 0;
//
//	for(int i = n1_new +1; i < n2_new; i++) {
//		int fn = i/gcd(i, m);
//		int fm = m/gcd(i, m);
//		if(fm == k) {
//			printf("%s%d/%d",flag ==true?" ":"",fn,k);
//			flag = 1;
//		}
//
//
//	}

	if(n1*m2 > n2*m1) {
		swap(n1,n2);
		swap(m1,m2);
	}
	int num = 1;
	bool flag = false;
	while(n1*k >= m1*num) num++;
	while(n1*k < m1*num &&m2*num < n2*k) {
		if(gcd(num,k)==1) {
			printf("%s%d/%d",flag==true?" ":"",num,k);
			flag = true;
		}
		num++;
	}
	return 0;
}
