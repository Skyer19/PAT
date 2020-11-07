#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin>>n;
	float max = 0;
	for(int i = 0; i < n; i++){
		float a,b;
		cin>>a>>b;
		float sum = sqrt(a*a+b*b);
		max = max < sum? sum:max; 
	}
	printf("%.2f",max);
	return 0;
}
