#include<bits/stdc++.h>
using namespace std;
bool isprime(int num){
	for(int i = 2;i*i <=num; i++){
		if(num%i==0) return false;
	}
	return true;
}
int main(){
	int M,N,num = 2,cnt = 0;
	vector<int> v;
	cin>>M>>N;
	while(cnt < N){
		if(isprime(num)){
			cnt++;
			if(cnt>=M) v.push_back(num);
		}
		num++;
	}
	cnt = 0;
	for(int i = 0; i < v.size(); i ++){
		cnt++;
		if(cnt%10!=1) cout<<" ";
		cout<<v[i];
		if(cnt%10==0) cout<<endl;
	}
	return 0;
	
} 
