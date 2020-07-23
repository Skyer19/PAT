#include<bits/stdc++.h>
using namespace std;

struct people {
	string name;
	int year;
	int month;
	int day;
	bool judge;
};
bool cmp(people c, people d) {
	if(c.year<d.year) {
		return c.year<d.year;
	} else if (c.year==d.year&c.month<d.month) {
		return c.month<d.month;
	} else if(c.year==d.year&c.month==d.month&c.day<d.day) {
		return c.day<d.day;
	}
}
int t;
int main() {
	cin>>t;
	people p [t];
	for(int i = 0; i < t; i++) {
		scanf("%s",&p[i].name);
		cin>>p[i].year>>p[i].month>>p[i].day;
		if((p[i].year>=2014&&p[i].month>=9&&p[i].day>=6)||p[i].year>2015||(p[i].year>=1814&&p[i].month<=9&&p[i].day<=6)||p[i].year<1813) {
			p[i].judge = true;
		}
	}
	sort(p,p+t,cmp);
	int sum;
	for(int i = 0; i < t; i++) {
		if(!p[i].judge) {
			sum++;
		}
	}
		for(int i = t-1; i >= 0; i--) {
		if(!p[i].judge) {
			cout<<p[i].name<<endl;
			break;
		}
	}
		for(int i = 0; i < t; i++) {
		if(!p[i].judge) {
			cout<<p[i].name<<endl;
			break;
		}
	}
}
