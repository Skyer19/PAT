/**�ҵ��뷨���Ȱ� 100000�����������������ҳ�����
 *���������αȽϿ��Ƿ�������2�������
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
	//����Ƿ�Ϊ����
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
/**������뷨�ǣ���һ���������ұ���С2�����������������Ƿ�ͬΪ����
 *������������Ƿ�ͬΪ����������������������+1
 *�൱��һ��ת����˼�� 
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
