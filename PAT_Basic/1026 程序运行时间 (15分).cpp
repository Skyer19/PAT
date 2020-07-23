#include<bits/stdc++.h>
using namespace std;

double c1,c2;
int h,m,s;
int main(){
	cin>>c1>>c2;
	int sum = ((c2-c1)/100+0.5);
	h = sum/3600;
	m = sum%3600/60;
	s = sum%60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
	
}
