# include<bits/stdc++.h>
using namespace std;

int n;
int main(){
	cin>>n;
	while(n--){
		int num;
		cin>>num;
		int flag = 1;
		int i = 1, temp;
		for(i = 1; i <= 9; i++){
			temp = i * num * num;
			string a = to_string(temp);
			string b = to_string(num);
			string c;
			for(int j = 0; j < b.size(); j++){
				c += a[a.size()-b.size() + j];	
			}
			if(c==b){
				flag =1;
				break;
			}
		}
		if(flag ==1&&i<=9){
			cout<<i<<" "<<temp<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
