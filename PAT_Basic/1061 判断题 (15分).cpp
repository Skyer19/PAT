#include<bits/stdc++.h>
using namespace std;

int n,m;

int main(){
	cin>>n>>m;
	 int score [m] = {0};
	 int a[m] = {0};
	 
	 for(int i = 0; i < m; i++){
	 	cin>>score[i];
	 }
	  for(int i = 0; i < m; i++){
	 	cin>>a[i];
	 }
	 
	 for(int i = 0; i < n; i++){
	 	int sum = 0;
	 	for(int j = 0; j < m; j++){
	 		int k = 0;
	 		cin>>k;
	 		if(a[j]==k){
	 			sum += score[j];
			 }
//			cout<<k<<" ";
		 }
		 cout<<sum<<endl;
	 }
	 return 0;
	} 
