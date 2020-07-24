#include<bits/stdc++.h>
using namespace std;
//notices:如果解不唯一，则输出按字母序最小的解。
int main() {
	int n = 0,awin = 0,bwin = 0;
	char A,B;
	int asum[3]= {0};
	int bsum[3]= {0};
	cin>>n;
	
	for(int i = 0; i < n ;i++) {
		cin>>A>>B;
		if(A=='C'&&B=='J') {  //J0 C1 B2
			awin++;
			asum[1]++;
		} else if(A=='C'&&B=='B') {
			bwin++;
			bsum[2]++;
		} else if(A=='J'&&B=='B') {
			awin++;
			asum[0]++;
		} else if(B=='C'&&A=='J') {
			bwin++;
			bsum[1]++;
		} else if(B=='C'&&A=='B') {
			awin++;
			asum[2]++;
		} else if(B=='J'&&A=='B') {
			bwin++;
			bsum[0]++;
		}

	}

	int amax = asum[0]>asum[1]? 0:1;
	amax =asum[amax]>asum[2]?amax:2;
	
	int bmax = bsum[0]>bsum[1]? 0:1;
	bmax =bsum[bmax]>bsum[2]?bmax:2;

	char c[3]= {'J','C','B'};
	cout<<awin<<" "<<(n-awin-bwin)<<" "<<bwin<<endl;
	cout<<bwin<<" "<<(n-awin-bwin)<<" "<<awin<<endl;
	cout<<c[amax]<<" "<<c[bmax]<<endl;
	return 0;
}
