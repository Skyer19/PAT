#include<bits/stdc++.h>
using namespace std;

int main() {
	int maxscore = -1, minscore = 101, score;
	string name,maxname,minname,id,maxid,minid;
	int n;
	cin>>n;
	while(n--) {
		cin>>name>>id>>score;
		if(score<minscore) {
			minscore = score;
			minname = name;
			minid = id;
		}
		if(score>maxscore) {
			maxscore = score;
			maxname = name;
			maxid = id;
		}
	}
	cout<<maxname<<" "<<maxid<<endl;
		cout<<minname<<" "<<minid<<endl;
}
