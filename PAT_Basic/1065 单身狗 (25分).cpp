#include<bits/stdc++.h>
using namespace std;
/*
 *  ����������ֿ�������� 
 *	�������cp����cpû�вμ���� 
 *	�����û��cp 
 *  ���ԣ���򵥵ķ�ʽ�Ǳ�ע�����ܲμ����Ŀ��� 
 */ 
int main(){
    int n, a, b, m;
    cin>>n;
    vector<int> couple (100000,-1);  //Ĭ�ϸ�ֵΪ-1  ��ʾ��ʱÿ���˶�û�ж��� 
    for(int i = 0; i < n; i++){
        scanf("%d%d",&a,&b); 
        //cp�໥��ʾ 
        couple[a] = b;
        couple[b] = a;
    }
    cin>>m;
    vector<int> guest(m), isExist(100000);
    for(int i = 0; i < m; i++){
        cin>>guest[i];  //��һ������ 
         //�ж���������Ƿ���cp 
        if(couple[guest[i]]!=-1){ // ������������cp 
            isExist[couple[guest[i]]] = 1;   // �ÚG�� �����������������ҵ����� 
        }
    }
    
    set <int> s;
    // ���������䵥��С������ 
    for(int i = 0; i < m; i++){
        if(!isExist[guest[i]]){
            s.insert(guest[i]);
        }
    }
    
    cout<<s.size()<<endl;
    
    //��ӡ�����䵥��С������ 
    for(auto it = s.begin(); it != s.end();it++){
        if(it!=s.begin()) printf(" ");
        printf("%05d", *it);
    }
    
    return 0;
}
