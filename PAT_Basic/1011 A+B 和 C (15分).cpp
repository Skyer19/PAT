#include<bits/stdc++.h>
using namespace std;
int A,B,C;
int main(){
	int n;
	cin>>n;
	for(int i = 0;i < n; i++){
		cin>>A>>B>>C;
//		if(A+B>C){
//			cout<<"Case #"<<i+1<<": true"<<endl;
//		}else{
//			cout<<"Case #"<<i+1<<": false"<<endl;
//		}
		printf("Case #%d: %s\n", i + 1, A + B > C ? "true" : "false");
	}
	
}
