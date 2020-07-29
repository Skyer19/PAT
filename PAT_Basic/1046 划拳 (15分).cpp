#include<bits/stdc++.h>
using namespace std;
int n,jiabeishu, yibeishu;
int jiahan,jiahua,yihan,yihua;
int sum;
int main(){
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>jiahan>>jiahua>>yihan>>yihua;
		sum = jiahan + yihan;
		if(jiahua == yihua) continue;
		if(sum == jiahua){
			yibeishu++;
		}else if(sum == yihua){
			jiabeishu++;
		}
	}
	cout<<jiabeishu<<" "<<yibeishu<<endl;
	return 0;
}
