#include<cstdio>
#include<iostream>
using namespace std;
int arr[103];
int num,n;
int main(){
		int num;
        scanf("%d",&num);	
		for(int i=0;i<num;++i) {
            scanf("%d",&n);
			arr[n]++;
		}

		scanf("%d",&n);
		for(int j=n;j>0;--j) {
            scanf("%d",&num);
           cout<<arr[num];
            if(j>1){
              cout<<" ";
            }
		}
        return 0;
	}


