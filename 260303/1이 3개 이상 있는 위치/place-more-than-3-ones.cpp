#include <iostream>

using namespace std;

int n;
int grid[100][100];

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
int Check1Count(int& grid){
    int count=0;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            //동남서북에 대해서 
            for(int i=0;i<4;i++){
                //범위체크
                if(CheckIsInRange(row+i,col+i)==false){
                    continue;
                }
                //1인지 확인
                if(grid[row+i][col+i]==1){
                    count++;
                }
            }
        }
    }
    return count;
}

//동남서북
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int result = 0;
    for(const auto& row:grid){
        for(const auto& col: row){
            if(Check1Count(grid)>=3){
                result++;
            }
        }
    }
    cout<<result;

    return 0;
}