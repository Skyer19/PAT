#include<bits/stdc++.h>
using namespace std;
int n;
int e,o;

int main() {

	scanf("%d",&n);
	while(n--) {
		int num;
		cin>>num;
		if(num&1) {
			o++;
		} else {
			e++;
		}
	}
	cout<<o<<" "<<e;
	return 0;
}
