#include<bits/stdc++.h>
using namespace std;
/*
 *	ע����ĿҪ�� 
 *  �������Դﵽ N ��ʱ�������һ�� Account locked������������
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
