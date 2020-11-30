# include<bits/stdc++.h>
using namespace std;

// 觉得像是滑动窗口
bool isPrime(int n) {
	if(n==0||n==1) return false;
	for(int i = 2; i * i <= n; i++) {
		if(n%i==0) {
			return false;
		}
	}
	return true;
}

int main() {
	int l, k;
	string n;
	cin>>l>>k>>n;

	for(int i = 0; i <= l - k; i ++) {
		string temp = n.substr(i , k);
		int num = stoi(temp);
		if(isPrime(num)) {
			cout<<temp;  //注意不是  cout<<num; 
			return 0;
		}
	}
    cout << "404\n";
    return 0;

}
