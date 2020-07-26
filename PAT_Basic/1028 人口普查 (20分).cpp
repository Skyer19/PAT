#include<bits/stdc++.h>
using namespace std;

int main(){
	int N, cut = 0;
	cin>>N;
	string name, maxname, minname, birth, maxbirth = "1814/09/06", minbirth = "2014/09/06";
	
	while(N--){
		cin>>name>>birth;
		if(birth<="2014/09/06"&&birth>="1814/09/06"){
			cut++;
			if(birth>=maxbirth){
				 maxname = name;
				 maxbirth = birth;
			}
			if(birth<=minbirth){
				minname = name;
				minbirth = birth;
			}
		} 
	}
		cout<<cut;
		if(cut!=0)cout<<" "<<minname<<" "<<maxname<<endl;
		return 0;
	
}
