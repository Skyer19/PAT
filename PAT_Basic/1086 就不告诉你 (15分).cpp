# include<bits/stdc++.h>
using namespace std;

int a, b;
int main(){
	cin>>a>>b;
	long long mul = a*b;
	string s = to_string(mul);
//	for(int i = s.size()-1; i >= 0; i-- ){
//		cout<<s[i];
//	}
	reverse(s.begin(), s.end());
 	printf("%d", stoi(s));
	return 0;
}
/*
 * ����һ����� 
 *  mul = 34567000 
 *  ʵ��Ҫ��� 76543  �������forѭ���ͻ����00076543 
 */
