#include<iostream>
#include<cstdio>
//Î´Íê´ýÐø 
using namespace std;
int a[6]={0};
int n,num,j,maxn;
double sum=0;
int main(){
	cin>>n;
	while(n--){
		cin>>num;
		if(num%5==0&&num%2==0) a[1]+=num;
		else if(num%5==1){
			j++;
			if(j%2!=0) {
				a[2]+=num;
			}
			else {
				a[2]-=num;
			}
		}else if(num%5==2) {
			a[3]++;
		}
		 else if(num%5==3){
			sum+=num;
			a[4]++;
		}else{
			if(num>a[5]) a[5]=num;
		}
	}
	for(int i=1;i<=5;i++){
		if(a[i]!=0&&i!=4){
			cout<<a[i];
		}else if(a[i] == 0){
			cout<<"N";
		}else if (i == 4){
			printf("%.1f",sum*1.0/a[i]);
		}
		if(i<5) cout<<" ";
	}
}
