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
 * 会有一种情况 
 *  mul = 34567000 
 *  实际要输出 76543  但如果用for循环就会输出00076543 
 */
