#include <bits/stdc++.h>
using namespace std;
#define MAXN 1001

double a;
struct kinds{
	double  sum;
	double  money;
	double average;
}k[MAXN];

bool cmp(kinds a, kinds b){
	return a.average>b.average;
}

int main(){
	int kind,tons;
	cin>>kind>>tons;
	for(int i = 0; i<kind; i++){
		cin>>k[i].sum;
	}
	for(int i = 0; i<kind; i++){
		cin>>k[i].money;
	}
	for(int i = 0; i<kind; i++){
		k[i].average = k[i].money*1.0/k[i].sum;
	}
	sort(k,k+kind,cmp);

	int j = 0;
	while(tons!=0){
		if(tons>=k[j].sum){
			a+=k[j].money;
			tons-=k[j].sum;
		}else{
			a+=tons*k[j].average;
			tons=0;
		}
		j++;
	}
	printf("%.02f",a);
}
