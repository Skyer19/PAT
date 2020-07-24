#include<bits/stdc++.h>
using namespace std;
struct node {
	int id,de,cai;
};
int cmp(node a, node b) {
	if(a.cai+a.de!=b.cai+b.de) {
		return (a.cai+a.de)>(b.cai+b.de);
	} else if(a.de!=b.de) {
		return a.de>b.de;
	} else {
		return a.id<b.id;
	}
}
int main() {
	int n, low, high;
	scanf("%d %d %d", &n, &low, &high);
	vector<node> v[4];
	node temp;
	int total = n;
	for(int i = 0; i < n ; i++) {
		scanf("%d %d %d", &temp.id, &temp.de, &temp.cai);
		if(temp.de<low||temp.cai<low) {
			total--;
		} else if(temp.cai>=high&&temp.de>=high) {
			v[0].push_back(temp);
		} else if(temp.de>=high&&temp.cai<high) {
			v[1].push_back(temp);
		} else if(temp.cai<high&&temp.de<high&&temp.de>=temp.cai) {
			v[2].push_back(temp);
		} else {
			v[3].push_back(temp);
		}

	}
	printf("%d\n", total);
	for (int i = 0; i < 4; i++) {
		sort(v[i].begin(), v[i].end(), cmp);
		for (int j = 0; j < v[i].size(); j++)
			printf("%d %d %d\n", v[i][j].id, v[i][j].de, v[i][j].cai);
	}
	return 0;
}
