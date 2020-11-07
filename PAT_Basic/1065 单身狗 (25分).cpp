#include<bits/stdc++.h>
using namespace std;
/*
 *  这道题有两种可能情况： 
 *	这个人有cp，但cp没有参加舞会 
 *	这个人没有cp 
 *  所以：最简单的方式是标注所有能参加舞会的客人 
 */ 
int main(){
    int n, a, b, m;
    cin>>n;
    vector<int> couple (100000,-1);  //默认赋值为-1  表示此时每个人都没有对象 
    for(int i = 0; i < n; i++){
        scanf("%d%d",&a,&b); 
        //cp相互表示 
        couple[a] = b;
        couple[b] = a;
    }
    cin>>m;
    vector<int> guest(m), isExist(100000);
    for(int i = 0; i < m; i++){
        cin>>guest[i];  //有一个客人 
         //判断这个客人是否有cp 
        if(couple[guest[i]]!=-1){ // 如果这个客人有cp 
            isExist[couple[guest[i]]] = 1;   // 好欸！ 这个客人在舞会中能找到伴了 
        }
    }
    
    set <int> s;
    // 储存所有落单的小可怜儿 
    for(int i = 0; i < m; i++){
        if(!isExist[guest[i]]){
            s.insert(guest[i]);
        }
    }
    
    cout<<s.size()<<endl;
    
    //打印所有落单的小可怜儿 
    for(auto it = s.begin(); it != s.end();it++){
        if(it!=s.begin()) printf(" ");
        printf("%05d", *it);
    }
    
    return 0;
}
