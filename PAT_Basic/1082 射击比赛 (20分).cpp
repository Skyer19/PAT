#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct people{
	string id;
	int x,y;
	float score;
}a[11111];
int n;
bool cmp (people a,people b){
	return a.score>b.score;
}
int main(){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			cin>>a[i].id>>a[i].x>>a[i].y;
			a[i].score=sqrt(a[i].x*a[i].x+a[i].y*a[i].y);
		}
	sort(a,a+n,cmp);
//	for(int i=0;i<n;i++){
//			cout<<a[i].score<<endl;
//		}
	cout<<a[n-1].id<<" "<<a[0].id<<endl;
	return 0;
	}


