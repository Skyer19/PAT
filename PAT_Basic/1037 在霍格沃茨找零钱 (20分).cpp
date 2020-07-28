#include<bits/stdc++.h>
using namespace std;
int P_Galleon, P_Sickle, P_Knut;
int A_Galleon, A_Sickle, A_Knut;
int main(){
	
	scanf("%d.%d.%d",&P_Galleon,&P_Sickle,&P_Knut);
	scanf("%d.%d.%d",&A_Galleon,&A_Sickle,&A_Knut);
	int P = P_Galleon*17*29+P_Sickle*29+P_Knut;
	int A = A_Galleon*17*29+A_Sickle*29+A_Knut;
	if(P>A){
		int temp = P - A;
		cout<<"-";
		cout<<temp/(17*29)<<".";
		temp = temp%(17*29);
		cout<<temp/29<<"."<<temp%29<<endl;
	}else{
		int temp = A- P;
		cout<<temp/(17*29)<<".";
		temp = temp%(17*29);
		cout<<temp/29<<"."<<temp%29<<endl;		
	}
	return 0;
}
