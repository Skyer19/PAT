#include<iostream>
using namespace std;
int main()
{	
	int a,b,f=0;
	while(cin>>a>>b)
	{
		if(b!=0){
			if(f==0)
				cout<<a*b<<" "<<b-1;
			else
				cout<<" "<<a*b<<" "<<b-1;
			f++;
		}
		if(f==0)
		   cout<<0<<" "<<0;
	}
	return 0;
}
