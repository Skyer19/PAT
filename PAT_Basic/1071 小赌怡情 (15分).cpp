# include<bits/stdc++.h>
using namespace std;

int T, k;
int n1, b, t, n2;

int main(){
	cin>>T>>k;
	
	while(T>0){
		cin>>n1>>b>>t>>n2;
		
		if(T == 0){
			cout<<"Game Over"<<endl;
			break;
		}
		if(t>T){
			cout<<"Not enough tokens. Total = "<<T<<"."<<endl;
			continue;
		}
		if((n1<n2&&b==1)||(n1>n2&&b==0)){
			T = T + t;
			printf("Win %d! Total = %d.",t,T);
		}else{
			printf("Lose %d! Total = %d.",t,T);
		}
	}
	
	return 0;
	
	
}
