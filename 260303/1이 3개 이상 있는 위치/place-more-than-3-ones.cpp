#include <iostream>

using namespace std;

int n;
int grid[100][100];
//동남서북
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

//범위 확인
bool CheckIsInRange(int x,int y){
    if(x<0||x>=n){
        return false;
    }
    if(y<0||y>=n){
        return false;
    }
    return true;
}

//동남서북에 1있는지 확인 & 카운트 리턴
int Check1Count(int row, int col){
    int count=0;
    
    //동남서북에 대해서 
    for(int i=0;i<4;i++){
        int nextRow = row + dx[i];
        int nextCol = col + dy[i];

        //범위체크
        if(CheckIsInRange(nextRow,nextCol)==false){
            continue;
        }
        //1인지 확인
        if(grid[nextRow][nextCol]==1){
            count++;
        }
    }
      
    return count;
}


int main() {
    cin >> n;
    int result = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(Check1Count(row,col)>=3){
                result++;
            }
        }
    }
    cout<<result;

    return 0;
}