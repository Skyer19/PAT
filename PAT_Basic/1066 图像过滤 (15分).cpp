#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, a, b, pix;
    cin>>m>>n>>a>>b>>pix;
    
    int p[m][n] ={0};
    
    for(int i = 0; i < m ;i++){
        for(int j = 0; j < n; j++){
            int temp;
            cin>>temp;
            if(temp>=a&&temp<=b){
                p[i][j]= pix;
            }else{
                p[i][j] = temp;
            }
        }
    }
    
    for(int i = 0; i < m ;i++){
      
        for(int j = 0; j < n; j++){
            if(j!=0) printf(" ");
            printf("%03d", p[i][j]);
        }
      printf("\n");
    }
    
    return 0;
}

