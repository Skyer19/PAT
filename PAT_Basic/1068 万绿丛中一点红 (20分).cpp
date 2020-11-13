# include<bits/stdc++.h>
using namespace std;
//我觉得这个方法肯定能写出来 只是时间的问题而已 
int m, n, tol, x, y, maxNum = -1, cut;
int x_[8] = {-1,0,1,-1,1,-1,0,1};
int y_[8] = {-1,-1,-1,0,0,1,1,1};

int isOverTol(int x,int y){
    int sum = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(abs(tol -pix[x+x_[i]][y+y_[j]])<0){
                return -1;
            }else{
                sum += abs(tol -num);
            }
        }
        return sum;
    }
    return sum;
}
int main(){
    cin>>m>>n>>tol;
    int pix[m+2][m+2];
    for(int i = 0 ; i <= m+1 ;i++){
        pix[i][0] = 0;
        pix[i][n+1] = 0;
    }
     for(int j = 0 ; j <= n+1 ;j++){
        pix[0][j] = 0;
        pix[m+1][j] = 0;
    } 
    
    for(int i = 1; i <= m ;i++){
        for(int j =1 ; j <= n; j++){
            scanf("%d",&pix[i][j]);
        }
    }
    
    for(int i = 1; i <= m ;i++){
        for(int j =1 ; j <=n; j++){
            int sum = isOverTol(i,j);
            if(sum>maxNum){
                maxNum =sum;
                x = i;
                y = j;
                cut = 1;
            }else if(sum == maxNum&&maxNum!=-1){
                cut++;
            }
        }
    }
    
    if(cut==1&&maxNum!=-1){
        printf("(%d, %d): %d",x,y,pix[x][y]);
    }else if(cut>1&&maxNum!=-1){
    	cout<<"Not Unique"<<endl;
	}else{
		cout<<"Not Exist"<<endl;
	}
    return 0;
}
