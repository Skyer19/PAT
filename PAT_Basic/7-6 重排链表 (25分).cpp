#include<bits/stdc++.h>
using namespace std;
int front,sum,address;
struct node {
	int add;
	int data;
	int next = -1;
} a[100001],b[100001],c[100001];
int main() {
	cin>>front>>sum;
	for(int i = 0; i < sum; i++) {
		cin>>address;
		a[address].add = address;
		cin>>a[address].data>>a[address].next;
	}	
	address = front;
	int k = 0;
	while(address!=-1){
		b[k].add = a[address].add;
		b[k].data = a[address].data;
		b[k].next = a[address].next;
		address = a[address].next;
		k++;
	}
	
	int s = 0;
	int j = 0;
	while(s<k/2) {
		c[j++] = b[k- s-1];
		c[j++] = b[s];
		s++;
	}
	if(k%2!=0) {
		int temp = k/2;
		c[j]= b[temp];
	}
	for(int i = 0; i < k-1; i++) {
		printf("%05d %d %05d\n",c[i].add,c[i].data,c[i+1].add);
	}
	printf("%05d %d %d",c[k-1].add,c[k-1].data,-1);

	return 0;
}
