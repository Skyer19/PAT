# include<bits/stdc++.h>
using namespace std;

int n, score;
int main(){
	cin>>n>>score;
	
	for(int i = 0; i < n; i++){
		int maxn = -1, minn = score+3, tscore, temp, sum_score = 0, cnt = 0;
		cin>>tscore;
		for(int j = 1; j < n; j++){
			cin>>temp;
			if(temp>=0&&temp<=score){
				sum_score += temp;
				if(temp>maxn)  maxn = temp;
				if(temp<minn)  minn = temp; 
				cnt++;
			}
		}
		
//		sum_score = (sum_score - maxn - minn)*1.0/(cnt - 2);
//		cout<<int((sum_score + tscore)/2+0.5)<<endl;
		
		cout<<int(((sum_score - maxn - minn)*1.0/(cnt - 2) + tscore)/2+0.5)<<endl;
	}
	
	return 0;
}
