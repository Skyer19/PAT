# include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n; 
	getchar();
	while(n--){
		string s;
		getline(cin, s);
		if(s.length()>=6){
			int invalid = 0, hasAlpha = 0, hasNum = 0;
			for(int i = 0; i < s.size(); i++){
				if(s[i]!='.'&&!isalnum(s[i])){
					invalid = 1;
				}else if(isalpha(s[i])){
					hasAlpha = 1;
				}else if(isdigit(s[i])){
					hasNum = 1;
				}
			}
			if(invalid == 1){
				cout<<"Your password is tai luan le."<<endl;
			}else if(hasNum == 0){
				cout<<"Your password needs shu zi."<<endl;
			}else if(hasAlpha == 0){
				cout<<"Your password needs zi mu."<<endl;
			}else{
				cout<<"Your password is wan mei."<<endl;
			}
//			if (invalid == 1) cout << "Your password is tai luan le.\n";
// 			else if (hasNum == 0) cout << "Your password needs shu zi.\n";
// 			else if (hasAlpha == 0) cout << "Your password needs zi mu.\n";
// 			else cout << "Your password is wan mei.\n";
		}else{
			cout<<"Your password is tai duan le."<<endl;
		}	
	}
	return 0;
}
