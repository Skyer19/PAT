#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a,b,sum,n;
int d[11111];
int main(){
	scanf("%d%d%d",&a,&b,&n);
	sum=a+b;
	int i=0;
	if(sum==0){
		cout<<0<<endl;
		return 0;
	}
	while(sum>0){
		d[i]=sum%n;
		sum=sum/n;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<d[j];
	} 
	
} 
