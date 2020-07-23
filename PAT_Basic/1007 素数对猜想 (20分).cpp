/**我的想法是先把 100000以内是素数的数字找出来，
 *再两两依次比较看是否符合相差2这个条件
 */
 
 /*
#include<bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin>>num;
	int k=0;
	int count=0;
	int arr[100000]= {0};
	//标记是否为素数
	for(int i=2; i<=num; i++) {
		int flag=0;
		for(int j=2; j*j<=i; j++) {
			if(i%j==0) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
			arr[k]=i;
			k++;
		}
	}
	for(int i=1; i<k; i++) {
		if(arr[i]-arr[i-1]==2) {
			count++;
		}
	}
	cout<<count<<endl;
}

 */
/**这个的想法是，找一个数，再找比它小2的数，看这两个数是否同为素数
 *如果这两个数是否同为素数，满足条件，计数器+1
 *相当于一种转化的思想 
 */
#include<bits/stdc++.h>
using namespace std;
bool isprime(int num) {
	for(int i = 2; i*i <= num; i++) {
		if(num%i==0) return false;
	}
	return true;
}
int main() {

	int N,cnt = 0;
	cin>>N;
	for(int i =5; i <= N; i++) {
		if(isprime(i-2)&&isprime(i)) {
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
