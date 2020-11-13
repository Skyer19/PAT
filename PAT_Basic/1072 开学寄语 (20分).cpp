# include<bits/stdc++.h>
using namespace std;

int n, m;
int p, w;
int main() {
    cin>>n>>m;
	int goods[m];
	for(int i = 0; i < m; i++) {
		scanf("%d",&goods[i]);
	}

	for(int i = 0; i < n; i++) {
		string name;
		int k;
		cin>>name>>k;
		int temp;
        bool flag = false;
		vector<int> v;
		for(int i = 0; i < k; i++) {
			cin>>temp;
			for(int j = 0; j < m ; j++) {
				if(temp == goods[j]) {
					v.push_back(temp);
                    if(!flag){
                        flag =true;
                        p++;
                    }
                    w++;
					break;
				}
			}
		}
		if(!v.empty()){
			cout<<name<<":";
			for(int i = 0; i < v.size(); i++){
				printf(" %.04d",v[i]);
			}
			cout<<endl;
           
		}
	}
     printf("%d %d",p,w);
}
