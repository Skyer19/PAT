#include<bits/stdc++.h>
using namespace std;
/*
 *	注意题目要求： 
 *  当错误尝试达到 N 次时，再输出一行 Account locked，并结束程序
 */
string ps;
int num, cut = 0;

int main() {
	cin>>ps>>num;
	cout<<"ps: "<<ps<<endl;
	getchar();
	while(1) {
		string temp;
		getline(cin,temp);
		if(temp == "#") break;
		cut++;
		if(cut<=num) {
			if(temp == ps) {
				cout<<"Welcome in"<<endl;
				break;
			} else if(temp != ps) {
				cout<<"Wrong password: "<<temp<<endl;
				if(cut==num) {
					cout<<"Account locked"<<endl;
					break;
				}
			}
		}
		
	}
	return 0;
}
