#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2,s3,s4;
	cin>>s1>>s2;
	cin>>s3>>s4;
	int num1,num2;
	bool flag =false;
	int length = min(s1.length(),s2.length());
	for(int i = 0; i <length ;i++){
		if(s1[i]==s2[i]&&s1[i]<='G'&&s1[i]>='A'){
			num1 = i;
			for(int j = i+1; j < length ;j++){
				if(s1[j]==s2[j]&& ((s1[j]>='A' && s1[j]<='N') || (s1[j] >= '0' && s1[j] <= '9'))){
					num2 = j;
					flag = true;
					break;
				}
			}
			if(flag = true){
				break;
			}
		}
	}
	switch(s1[num1]){
		case 'A':cout<<"MON";break;
		case 'B':cout<<"TUE";break;
		case 'C':cout<<"WED";break;
		case 'D':cout<<"THU";break;
		case 'E':cout<<"FRI";break;
		case 'F':cout<<"SAT";break;
		case 'G':cout<<"SUN";break;
	}
	cout<<" ";
	 
	if(s1[num2]<='9'&&s1[num2]>='0'){
		cout<<0<<s1[num2];
	}else if (s1[num2]<='N'&&s1[num2]>='A'){
		cout<<int(s1[num2]-'A'+10);
	}
	cout<<":";
	
	length = min(s3.length(),s4.length());
	for(int i = 0; i <length ;i++){
		if(s3[i]==s4[i]&& ((s3[i]<='Z'&&s4[i]>='A')||(s3[i]<='z'&&s4[i]>='a')) ){
//			if(i<10){
//				cout<<0;
//			}
//			cout<<i<<endl;
 		printf("%02d", i);	
			break;
		}	
	}
	
}
