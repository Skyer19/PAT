#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	char c;
	cin>>n;
	getchar();
	cin>>c;
	int temp = n/2+n%2;
	for(int i = 1; i <= temp; i++) {
		for(int j = 0; j < n; j++) {
			if(i == 1||i == temp) {
				cout<<c;
			} else {
				if(j ==0||j ==n-1) {
					cout<<c;
				} else {
					cout<<" ";
				}
			}
		}
		if(i!=temp)cout<<endl;
	}
	return 0;
}
