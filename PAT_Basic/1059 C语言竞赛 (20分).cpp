#include<bits/stdc++.h>
using namespace std;

int ran[10000] ={0};

bool isprime(int num) {
	if(num <= 1) return false;
	for(int i = 2 ; i*i <= num; i++) {
		if(num%i ==0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n , k;
	cin>>n;
	for(int i = 0; i < n; i++) {
		int id;
		scanf("%d", &id);
		ran[id] = i + 1;
	}
	cin>>k;
	set<int>s;
	for(int i = 0; i < k; i++) {
		int id;
		cin>>id;
		printf("%04d: ",id);
		if(ran[id] == 0) {
			cout<<"Are you kidding?"<<endl;
			continue;
		}
		if(s.find(id)==s.end()) {
			s.insert(id);
		} else {
			cout<<"Checked"<<endl;
			continue;
		}
		if(ran[id] == 1) {
			cout<<"Mystery Award"<<endl;
		} else if(isprime(ran[id])) {
			cout<<"Minion"<<endl;
		} else {
			cout<<"Chocolate"<<endl;
		}
	}
	return 0;
}


