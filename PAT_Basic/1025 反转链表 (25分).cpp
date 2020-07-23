#include <bits/stdc++.h>
//°Ç´ð°¸µÄ 
using namespace std;
 
#define MAXN 100005
 
struct node{
    int ads, data, next;
}v1[MAXN], v2[MAXN];
 
int main(){
    int add, n, k;
    cin >> add >> n >> k;
    for(int i = 0;i < n;i++){
        int x;
        scanf("%d",&x);
        scanf("%d%d",&v1[x].data, &v1[x].next);
    }
    int j;                
    for(j = 1;add != -1;j++){
        v2[j].ads = add;
        v2[j].data = v1[add].data;
        add = v1[add].next;
    }
    cout<<"j :"<<j<<endl;
    j--;               
    cout<<"j :"<<j<<endl;
    int cnt = j / k;
    int rem = j % k;
    int num = 1;
    for(int i = 1;i <= cnt;i++){
        for(int p = i * k;p > (i - 1) * k;p--)
            v1[num++] = v2[p];
    }
    for(int q = 1;q <= rem;q++)
        v1[num++] = v2[cnt * k + q];
    int i;
    for(i = 1;i <= num - 2;i++)
        printf("%05d %d %05d\n", v1[i].ads, v1[i].data,v1[i+1].ads);
    printf("%05d %d -1",v1[i].ads, v1[i].data);
    return 0;
}
