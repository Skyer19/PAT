#include<bits/stdc++.h>
using namespace std;

string s;

int main(){
	getline(cin,s);
	long long sum = 0;
	for(int i = 0; i < s.length(); i++){
		if(isupper(s[i])){
			sum += (s[i]-'A'+1);
		}
		if(islower(s[i])){
			sum += (s[i]-'a'+1); 
		}
	}
	int cut0 = 0;
	int cut1 = 0; 
	  while(sum!=0){
        if((sum & 1)){
        	cut1 ++;
		}else{
			cut0 ++;
		}
		sum = sum>>1;
    }
    cout<<cut0 <<" "<<cut1<<endl;
    return 0;
}
