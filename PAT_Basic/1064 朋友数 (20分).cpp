#include<bits/stdc++.h>
using namespace std;

int getFriendNum(int n){
	int cut = 0;
	while(n!=0){
		cut += n%10;
		n = n/10;
	}
	return cut;
}
int main(){
	set<int> s;
	int n, num;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>num;
		s.insert(getFriendNum(num));
	}
	cout<<s.size()<<endl;
	for(auto it = s.begin(); it!=s.end(); it++){
		if(it!=s.begin()){
			cout<<" "; 
		}
		cout<<*it;
	}
	return 0;

}
