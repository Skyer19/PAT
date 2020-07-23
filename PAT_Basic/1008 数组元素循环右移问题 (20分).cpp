#include<bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	m %= n;
	if (m != 0) {
		reverse(begin(a), begin(a) + n);
		reverse(begin(a), begin(a) + m);
		reverse(begin(a) + m, begin(a) + n);
	}
	for (int i = 0; i < n; i++){ 
	if(i!=0) cout<<" "; 
		cout << a[i];
	} 
	return 0;
}

