#include<bits/stdc++.h>
using namespace std;

double mayEmpty, empty;
int mayEmptyNum, emptyNum;

int main() {
	int n, d;
	double e;
	cin>>n>>e>>d;

	for(int i = 0; i < n; i++) {
		int k;
		cin>>k;
		int a = 0;
		for(int j = 0; j < k; j++) {
			double dianliang;
			cin>>dianliang;
			if(dianliang<e) {
				a++;
			}
		}

		if((a>k*1.0/2)) {
			mayEmptyNum++;
			if(k>d) {
				emptyNum++;
				mayEmptyNum--;
			}
		}
	}

	mayEmpty = mayEmptyNum*1.0 / n * 100;
	empty = emptyNum*1.0 / n * 100;
	printf("%.1f%% %.1f%%", mayEmpty, empty);
	return 0;

}
