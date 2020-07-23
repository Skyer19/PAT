#include<bits/stdc++.h> 
using namespace std;
int num;
char c;
int main(){
	cin>>num>>c;
	int newNum = (num -1)/2;
	int sum=0;
	int count=0;
	int k=1;
		while(sum<=newNum) {	
			k=k+2;		
			sum+=k;			
			count++;
		}
		sum = sum -k;
		k = k -2;
	for(int i = k; i >=1 ;i -=2){
		int temp = (k - i)/2;
		for(int j = 0; j < temp ;j++){
			cout<<" ";
		}
		for(int j = 0; j < i;j++){
			cout<<c;
		}
		for(int j = 0; j < temp ;j++){
			cout<<" ";
		}
			cout<<endl;
	}

		for(int i = 3; i <=k ;i +=2){
		int temp = (k - i)/2;
		for(int j = 0; j < temp ;j++){
			cout<<" ";
		}
		for(int j = 0; j < i;j++){
			cout<<c;
		}
		for(int j = 0; j < temp ;j++){
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<num - sum*2 -1;
}
