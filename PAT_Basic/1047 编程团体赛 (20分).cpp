#include<bits/stdc++.h>
using namespace std;
int n,duiyuan,score;
int teams[1005];
int team;
int main(){
	cin>>n;
	for(int i = 0; i < n;i ++){
		scanf("%d-%d %d",&team,&duiyuan,&score);
		teams[team]+=score;
	}
	int max = teams[0];
	int j = 0;
	for(int i = 0;i < 1001; i++){
		if(teams[i]>max){
			max = teams[i];
			j =i;
		}
	}
	cout<<j << " "<<max<<endl;
	return 0;
}
